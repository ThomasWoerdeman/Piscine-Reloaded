/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 17:58:59 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/08 17:59:00 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		ft_putchar(str[cnt]);
		cnt++;
	}
}

int		main(int ac, char **av)
{
	int cnt;

	cnt = 1;
	while (cnt < ac)
	{
		ft_putstr(av[cnt]);
		ft_putstr("\n");
		cnt++;
	}
}
