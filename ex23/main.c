/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 18:35:32 by vholovin          #+#    #+#             */
/*   Updated: 2018/02/06 18:36:30 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point		point;

	set_point(&point);
	return (0);
}