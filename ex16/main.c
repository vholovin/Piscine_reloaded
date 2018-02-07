/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 23:20:24 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/02 20:11:42 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);

int 	main()
{
	char *str = "abrakadabra";

	printf("%s - %d\n", str, ft_strlen(str));
	return (0);
}