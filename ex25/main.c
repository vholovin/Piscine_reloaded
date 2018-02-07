/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:31:06 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/07 18:04:29 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb > 0 && nb < 10)
		ft_putchar('0' + nb);
}

void	ft_foreach(int *tab, int length, void (*f)(int));

int		main(void)
{
	int		tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_foreach(tab, 1337, &ft_putnbr);
	return (0);
}