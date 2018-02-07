/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:11:29 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/03 15:02:59 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*bufer;
	int		index;

	if (min >= max)
		return (NULL);
	bufer = (int*)malloc(sizeof(*bufer) * (max - min));
	index = 0;
	while (min < max)
	{
		bufer[index] = min;
		min++;
		index++;
	}
	return (bufer);
}
