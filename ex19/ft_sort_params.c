/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 18:06:28 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/08 18:06:29 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

int		ft_strcmp(char *s1, char *s2)
{
	int		cnt;

	cnt = 0;
	while (s1[cnt] != '\0' && s2[cnt] != '\0' && s1[cnt] == s2[cnt])
		cnt++;
	return (s1[cnt] - s2[cnt]);
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

void	ft_print(int ac, char **av)
{
	int		cn;

	cn = 1;
	while (cn < ac)
	{
		ft_putstr(av[cn]);
		ft_putstr("\n");
		cn++;
	}
}

int		main(int ac, char **av)
{
	int		cn;
	char	*c;
	int		c1;
	int		c2;

	cn = 0;
	while (cn <= ac)
	{
		c1 = 1;
		c2 = 2;
		while (c2 < ac)
		{
			if (ft_strcmp(av[c1], av[c2]) > 0)
			{
				c = av[c1];
				av[c1] = av[c2];
				av[c2] = c;
			}
			c1++;
			c2++;
		}
		cn++;
	}
	ft_print(ac, av);
}
