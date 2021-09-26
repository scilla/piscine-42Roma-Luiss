/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:34:31 by scilla            #+#    #+#             */
/*   Updated: 2020/12/10 14:41:59 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	join(int size, char **strs, char *sep, char *joined)
{
	int i;
	int p;
	int q;

	i = 0;
	q = 0;
	while (i < size)
	{
		p = 0;
		while (strs[i][p])
			joined[q++] = strs[i][p++];
		p = 0;
		while (sep[p] && i + 1 < size)
			joined[q++] = sep[p++];
		i++;
	}
	joined[q] = 0;
	return ;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*joined;
	int		j_len;

	i = 0;
	j_len = 0;
	while (i < size)
		j_len += ft_strlen(strs[i++]);
	if (size <= 0)
	{
		joined = (char**)malloc(sizeof(char));
		joined[0] = 0;
		return (joined);
	}
	joined = malloc(sizeof(char) * (1 + j_len + ft_strlen(sep) * (size - 1)));
	join(size, strs, sep, joined);
	return (joined);
}

char c = 'A';
fn((int)c)

