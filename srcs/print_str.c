/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:39:26 by wchen             #+#    #+#             */
/*   Updated: 2022/10/30 14:17:39 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"
#include	"../libft/libft.h"

int	print_str(char *str)
{
	size_t	len_str;

	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	len_str = ft_strlen(str);
	if (len_str > INT_MAX)
		return (-1);
	ft_putstr_fd(str, 1);
	return ((int)len_str);
}
