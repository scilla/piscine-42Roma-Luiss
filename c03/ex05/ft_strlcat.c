/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:31:27 by scilla            #+#    #+#             */
/*   Updated: 2020/12/04 11:48:37 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int p;

	p = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != 0 && dest_len < size)
		dest_len++;
	while (src[src_len] != 0)
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[p] && dest_len + 1 + p < size)
	{
		dest[dest_len + p] = src[p];
		p++;
	}
	dest[dest_len + p] = 0;
	return (src_len + dest_len);
}
