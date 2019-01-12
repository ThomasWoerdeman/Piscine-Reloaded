/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: twoerdem <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 11:37:12 by twoerdem      #+#    #+#                 */
/*   Updated: 2019/01/09 11:37:14 by twoerdem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ret;
	int		cnt;
	int		len;

	cnt = 0;
	while (src[cnt] != '\0')
	{
		cnt++;
	}
	ret = malloc(sizeof(char) * cnt);
	len = 0;
	while (len < cnt)
	{
		ret[len] = src[len];
		len++;
	}
	ret[len] = '\0';
	return (ret);
}
