/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:53:59 by wchen             #+#    #+#             */
/*   Updated: 2022/10/30 14:10:08 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	print_format(char format, va_list *args)
{
	int	ret_count;

	ret_count = 0;
	if (format == 'c')
		ret_count += print_char(va_arg(*args, int));
	else if (format == 's')
		ret_count += print_str(va_arg(*args, char *));
	else if (format == 'p')
		ret_count += print_ptr(va_arg(*args, unsigned long long));
	else if (format == 'd' || format == 'i')
		ret_count += print_int(va_arg(*args, int));
	else if (format == 'u')
		ret_count += print_unint(va_arg(*args, unsigned int));
	else if (format == 'x')
		ret_count += print_x(va_arg(*args, unsigned int));
	else if (format == 'X')
		ret_count += print_bx(va_arg(*args, unsigned int));
	else if (format == '%')
		ret_count += print_char('%');
	else
		ret_count = 0;
	return (ret_count);
}

int	check_count(int ret_count)
{
	if ((unsigned int)ret_count + 1 > INT_MAX)
		return (1);
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		ret_count;

	va_start(args, format);
	i = 0;
	ret_count = 0;
	while (format[i] != '\0')
	{
		if (check_count(ret_count))
			return (-1);
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			ret_count++;
		}
		else if (format[i + 1] != '\0')
			ret_count += print_format(format[++i], &args);
		i++;
	}
	va_end(args);
	return (ret_count);
}
