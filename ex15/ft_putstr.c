/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 12:36:07 by vholovin          #+#    #+#             */
/*   Updated: 2016/10/31 13:14:41 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int number;

	number = 0;
	while (str[number] != '\0')
	{
		ft_putchar(str[number]);
		number++;
	}
}
