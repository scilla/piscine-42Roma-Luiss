/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:33:18 by scilla            #+#    #+#             */
/*   Updated: 2020/12/03 17:01:35 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int p;

	i = 0;
	p = 0;
	while (dest[i] != 0)
		i++;
	while (src[p] != 0 && p < nb)
	{
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = 0;
	return (dest);
}
