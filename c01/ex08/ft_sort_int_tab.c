/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:54:50 by scilla            #+#    #+#             */
/*   Updated: 2020/11/30 15:39:30 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int p;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		p = 0;
		while (p < size - i - 1)
		{
			if (tab[p] > tab[p + 1])
			{
				temp = tab[p];
				tab[p] = tab[p + 1];
				tab[p + 1] = temp;
			}
			p++;
		}
		i++;
	}
	return ;
}
