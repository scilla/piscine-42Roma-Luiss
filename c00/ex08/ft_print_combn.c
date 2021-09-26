/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:25:34 by scilla            #+#    #+#             */
/*   Updated: 2020/11/29 14:24:19 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printarr(char *arr, int len)
{
	char printv;

	while (len-- > 0)
	{
		printv = arr[len] + 48;
		write(1, &printv, 1);
	}
	return ;
}

void	real_fn(char *arr, int n)
{
	int i;
	int p;

	printarr(arr, n);
	i = 0;
	if (arr[n - 1] == 10 - n)
		return ;
	else
		write(1, ", ", 2);
	while (i < n - 1 && arr[i] >= 9 - i)
		i++;
	arr[i]++;
	p = i;
	while (--p >= 0)
		arr[p] = arr[p + 1] + 1;
	real_fn(arr, n);
	return ;
}

void	ft_print_combn(int n)
{
	char	arr[10];
	int		i;

	i = 0;
	while (i < n)
	{
		arr[i] = n - i - 1;
		i++;
	}
	real_fn(arr, n);
}
