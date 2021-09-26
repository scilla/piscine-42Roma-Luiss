/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:45:45 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 12:45:50 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int only_nums;
	int i;
	int x;

	only_nums = 1;
	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		if (x > 57 || x < 48)
		{
			only_nums = 0;
			break ;
		}
		i++;
	}
	return (only_nums);
}
