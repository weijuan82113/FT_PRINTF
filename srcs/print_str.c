/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:39:26 by wchen             #+#    #+#             */
/*   Updated: 2022/10/11 22:40:26 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"
#include	"../libft/libft.h"

int	print_str(char *str)
{
	size_t	len_str;

	if (!str)
	{
		ft_putstr_fd("(null)", (int)1);
		return (6);
	}
	ft_putstr_fd(str, (int)1);
	len_str = ft_strlen(str);
	return (len_str);
}
