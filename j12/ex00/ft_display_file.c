/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillot <kguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 23:37:09 by kguillot          #+#    #+#             */
/*   Updated: 2015/08/23 15:54:22 by kguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_read(char **argv)
{
	int		fd;
	char	buf[65];
	int		ret;
	int		i;

	i = 0;

	fd = open(argv[1], O_RDONLY);
		ret = read(fd, buf, 64);
		buf[ret] = 0;
		while (buf[i] != '\0')
		{
			write(1, &buf[i], 1);
			i++;
			if (i == 64)
			{
				ret = read(fd, buf, 64);
				buf[ret] = 0;
				i = 0;
			}
		}
		close(fd);
}

int		main(int argc, char **argv)
{

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_read(argv);
	return (0);
}
