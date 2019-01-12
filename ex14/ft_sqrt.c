/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 16:35:53 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/08 16:35:55 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int cnt;

	cnt = 1;
	if (nb == 0)
		return (0);
	while (cnt * cnt < nb)
	{
		cnt++;
	}
	if (nb / cnt == cnt)
		return (cnt);
	else
		return (0);
}
