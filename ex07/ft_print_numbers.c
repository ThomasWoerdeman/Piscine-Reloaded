/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 20:16:09 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/07 20:16:11 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_print_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}
