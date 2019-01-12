/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 12:07:00 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/09 12:07:02 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*ret;
	int cnt;
	int sze;

	if (min >= max)
		return (NULL);
	cnt = 0;
	sze = max - min;
	ret = (int*)malloc(sizeof(*ret) * sze);
	while (min < max)
	{
		ret[cnt] = min;
		min++;
		cnt++;
	}
	return (ret);
}
