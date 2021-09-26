/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:58:02 by scilla            #+#    #+#             */
/*   Updated: 2020/12/03 17:01:59 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int p;

	i = 0;
	if (!to_find || !to_find[0])
		return (str);
	while (str[i])
	{
		p = 0;
		while (str[i + p] == to_find[p])
		{
			if (!to_find[p + 1])
				return (str + i);
			p++;
		}
		i++;
	}
	return (0);
}
