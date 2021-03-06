/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:06:27 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 11:11:14 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;
	int x;

	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		if (x >= 97 && x <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
