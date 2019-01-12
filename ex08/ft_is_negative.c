/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 20:19:36 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/07 20:19:38 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
