/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:43:46 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 19:26:44 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int p;

	i = 0;
	p = 0;
	while (dest[i] != 0)
		i++;
	while (src[p] != 0)
	{
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = 0;
	return (dest);
}
