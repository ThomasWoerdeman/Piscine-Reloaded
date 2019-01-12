/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_if.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 15:51:49 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/09 15:51:51 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	cnt;
	int ret;

	cnt = 0;
	ret = 0;
	while (tab[cnt] != 0)
	{
		if (f(tab[cnt]) == 1)
			ret++;
		cnt++;
	}
	return (ret);
}
