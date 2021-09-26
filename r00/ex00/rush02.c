/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnataliz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:38:23 by jnataliz          #+#    #+#             */
/*   Updated: 2020/11/29 12:01:05 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check(int x, int y, int i, int p)
{
	if ((i == 0 && p == 0) || (i == x - 1 && p == 0))
		ft_putchar('A');
	else if ((i == 0 && p == y - 1) || (i == x - 1 && p == y - 1))
		ft_putchar('C');
	else if (p == 0 || i == x - 1 || i == 0 || p == y - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
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
