/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 21:47:51 by vholovin          #+#    #+#             */
/*   Updated: 2016/10/28 22:13:13 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int i;
	int j;
	int div;
	int mod;

	i = 50;
	j = 20;
	div = 0;
	mod = 0;
	printf("div:%d - mod:%d\n", div, mod);
	ft_div_mod(i, j, &div, &mod);
	printf("div:%d - mod:%d\n", div, mod);
	return (0);

}