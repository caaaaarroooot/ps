/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilee2 <devcarrot12@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:50:18 by jilee2            #+#    #+#             */
/*   Updated: 2024/08/25 21:54:43 by jilee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes;
	char	buf[1000];

	if (argc < 2)
	{
		write (2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open (argv[1], O_RDWR);
	if (fd == -1)
	{
		write (2, "Cannot read file.\n", 18);
		return (1);
	}
	bytes = read(fd, buf, 1000);
	buf[bytes] = 0;
	write (1, buf, bytes);
	close (fd);
}
