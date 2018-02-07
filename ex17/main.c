/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 22:17:01 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/02 20:30:58 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = "Hello World";
	char s2[] = "Hillo World";

	printf("%s - %s : %d\n", s1, s2, ft_strcmp(s1, s2));
	return (0);
}