/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:18:35 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 11:13:41 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int x;
	int new_word;

	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		x = str[i];
		if (x >= 'a' && x <= 'z' && new_word)
			str[i] -= 32;
		else if (x >= 'A' && x <= 'Z' && !new_word)
			str[i] += 32;
		if (x < '0' || (x > '9' && x < 'A') || (x > 'Z' && x < 'a') || x > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
