/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:25:55 by scilla            #+#    #+#             */
/*   Updated: 2020/11/29 16:56:46 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_trailed_int(int a, int b)
{
	char str[5];

	str[0] = a / 10;
	str[1] = a - str[0] * 10 + 48;
	str[0] += 48;
	str[2] = ' ';
	str[3] = b / 10;
	str[4] = b - str[3] * 10 + 48;
	str[3] += 48;
	write(1, &str, 5);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
	return ;
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_trailed_int(a, b);
			b++;
		}
		a++;
	}
}
