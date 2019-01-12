/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_foreach.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 15:42:38 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/09 15:42:39 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	cnt;

	cnt = 0;
	while (cnt < length)
	{
		f(tab[cnt]);
		cnt++;
	}
}
