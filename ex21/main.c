/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:11:29 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/03 15:02:59 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int		min = -10;
	int		max = 10;
	int		index = 0;
	int		*range2 = ft_range(min, max);

	while (index < max - min)
	{
		printf("%d", range2[index]);
		printf("%c", ' ');
		index++;
	}
	printf("%c", '\n');
	return (0);
}