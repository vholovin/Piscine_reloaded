/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:38:10 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/07 19:43:15 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	while (str[0] != '\0')
	{
		if (str[0] == '\0')
		{
			return (0);
		}
		if (!((str[0] >= 'A' && str[0] <= 'Z'))
				&& !(str[0] >= 'a' && (str[0] <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int		ft_count_if(char **tab, int (*f)(char*));

int		main(int argc, char **argv)
{
	int c;

	c = argc;
	printf("%d\n", ft_count_if(argv, &ft_str_is_alpha));
	return (0);
}