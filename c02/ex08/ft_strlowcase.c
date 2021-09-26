/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:13:19 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 11:11:50 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;
	int x;

	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		if (x >= 65 && x <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}