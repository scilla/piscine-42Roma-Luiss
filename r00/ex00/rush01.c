/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-luca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:05:27 by ede-luca          #+#    #+#             */
/*   Updated: 2020/11/29 11:59:52 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check(int x, int y, int i, int p)
{
	if ((i == 0 && p == 0) || (i == x - 1 && p == y - 1 && i > 0 && p > 0))
	{
		ft_putchar('/');
	}
	else if ((i == x - 1 && p == 0) || (i == 0 && p == y - 1))
	{
		ft_putchar(92);
	}
	else if ((i > 0 && i < x - 1) && (p > 0 && p < y - 1))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
	return ;
}

void	rush(int x, int y)
{
	int i;
	int p;

	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	p = 0;
	while (p < y)
	{
		i = 0;
		while (i < x)
		{
			check(x, y, i, p);
			i++;
		}
		ft_putchar('\n');
		p++;
	}
	return ;
}
