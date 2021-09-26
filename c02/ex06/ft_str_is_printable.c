/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:03:48 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 11:09:39 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int match;
	int i;
	int x;

	match = 1;
	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		if (x > 126 || x < 32)
		{
			match = 0;
			break ;
		}
		i++;
	}
	return (match);
}
