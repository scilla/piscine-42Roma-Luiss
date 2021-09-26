/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:59:55 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 12:21:40 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int str_len;

	i = 0;
	str_len = 0;
	while (src[str_len] != '\0')
	{
		if (i < size - 1 && size > 1)
		{
			dest[i] = src[i];
			i++;
		}
		str_len++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (str_len);
}
