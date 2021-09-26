/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:15:10 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 11:03:31 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int only_alpha;
	int i;
	int x;

	only_alpha = 1;
	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		if (!(x <= 90 && x >= 65) && !(x >= 97 && x <= 122))
		{
			only_alpha = 0;
			break ;
		}
		i++;
	}
	return (only_alpha);
}
