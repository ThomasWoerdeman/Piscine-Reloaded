/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 15:25:09 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/08 15:25:11 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = nb;
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (nb > 1)
	{
		nb--;
		res = res * nb;
	}
	return (res);
}
