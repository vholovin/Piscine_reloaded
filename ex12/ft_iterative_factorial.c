/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 13:48:45 by vholovin          #+#    #+#             */
/*   Updated: 2016/10/29 21:49:34 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fac;

	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0)
			return (1);
		fac = 1;
		while (nb != 0)
		{
			fac = fac * nb;
			nb--;
		}
		return (fac);
	}
	return (0);
}
