/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:09:36 by scilla            #+#    #+#             */
/*   Updated: 2020/12/10 12:09:42 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*dup;
	unsigned int	str_size;
	unsigned int	i;

	str_size = 0;
	while (src[str_size])
		str_size++;
	dup = malloc(sizeof(char) * (str_size + 1));
	i = 0;
	while (i < str_size + 1)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
