/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 16:31:24 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/09 16:31:25 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		ft_putchar(str[cnt]);
		cnt++;
	}
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(av[1], O_RDONLY);
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}
