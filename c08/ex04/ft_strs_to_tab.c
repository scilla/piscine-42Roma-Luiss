/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:51:01 by scilla            #+#    #+#             */
/*   Updated: 2020/12/11 18:57:22 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			p;
	t_stock_str	*arr;

	i = 0;
	arr = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	while (i < ac)
	{
		(arr + i)->str = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		if (!arr[i].str)
			return (0);
		p = -1;
		while (++p < ft_strlen(av[i]) + 1)
		{
			arr[i].str[p] = av[i][p];
		}
		arr[i].copy = ft_strdup(arr[i].str);
		arr[i].size = ft_strlen(arr[i].str);
		i++;
	}
	arr[i].str = (char *)malloc(sizeof(char));
	arr[i].str[0] = 0;
	return (arr);
}
