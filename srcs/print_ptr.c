/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:09:11 by wchen             #+#    #+#             */
/*   Updated: 2022/10/11 22:39:00 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"
#include	"../libft/libft.h"

void	ft_putptr_fd(uintptr_t uint_ptr, int fd)
{
	char	num;

	if (uint_ptr > 15)
	{
		ft_putptr_fd(uint_ptr / 16, fd);
		ft_putptr_fd(uint_ptr % 16, fd);
	}
	else
	{
		if (uint_ptr > 9)
			num = (int)uint_ptr - 10 + 'a';
		else
			num = (int)uint_ptr + '0';
		ft_putchar_fd(num, fd);
	}
}

int	print_ptr(uintptr_t uint_ptr)
{
	int			count_digit;
	uintptr_t	temp_intptr;

	if (uint_ptr == 0)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	temp_intptr = uint_ptr;
	count_digit = 2;
	while (temp_intptr != 0)
	{
		count_digit ++;
		temp_intptr /= 16;
	}
	ft_putptr_fd(uint_ptr, 1);
	return (count_digit);
}
