/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:10:17 by wchen             #+#    #+#             */
/*   Updated: 2022/10/30 14:18:47 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "srcs/ft_printf.h"
# include <stdio.h>

int main (void)
{
	char *string = "dcba";
	//char chr = 'a';
	//int	integer = 0;
	//char	*ptr = NULL;
	int	int_printf = 0;
	int	int_ft_printf = 0;

	int_printf = printf("string is %s\n", string);
	printf("count_ptr is %d \n", int_printf);
	//sleep(10);
	int_ft_printf = ft_printf("ft_string is %s\n", string);
	printf("count_ft_ptr is %d \n", int_ft_printf);
	//sleep(10);
	//printf("x is %x \n", integer);
	//ft_printf("unint_x is %x \n", integer);
	return (0);
}
