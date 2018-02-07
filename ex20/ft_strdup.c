/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:34:02 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/03 14:10:45 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char			*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static size_t		ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(str);
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, str);
	return (dest);
}
