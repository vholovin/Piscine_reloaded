/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:34:02 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/03 14:10:45 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *str);

int		main(void)
{
	char	*src = "Hello World!";
	char	*buf = "";

	printf("%s - %s\n", src, buf);
	buf = ft_strdup(src);
	printf("%s - %s\n", src, buf);
	return (0);
}
