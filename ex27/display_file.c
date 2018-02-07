/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:42:29 by vholovin          #+#    #+#             */
/*   Updated: 2016/11/10 19:15:29 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	c;

	while (read(fd, &c, 1) != 0)
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		if (argc < 2)
			write(1, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	ft_display_file(fd);
	close(fd);
	return (0);
}
