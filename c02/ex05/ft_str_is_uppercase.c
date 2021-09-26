/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:46:43 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 12:46:45 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int match;
	int i;
	int x;

	match = 1;
	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		if (x > 90 || x < 65)
		{
			match = 0;
			break ;
		}
		i++;
	}
	return (match);
}
