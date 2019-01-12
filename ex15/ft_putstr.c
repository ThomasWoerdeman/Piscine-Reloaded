/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 17:20:00 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/08 17:20:01 by twoerdem      ########   odam.nl         */
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
