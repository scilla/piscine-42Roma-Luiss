/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:01:31 by scilla            #+#    #+#             */
/*   Updated: 2020/12/08 19:24:07 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(long int board, int depth)
{
	int arr[10];
	int i;
	int p;

	i = 0;
	while (i < depth)
	{
		arr[i] = (int)(board % 10);
		p = 0;
		while (p < i)
		{
			if (arr[i] == arr[p])
				return (0);
			else if (arr[i] == arr[p] - i + p || arr[i] == arr[p] + i - p)
				return (0);
			p++;
		}
		board /= 10;
		i++;
	}
	return (1);
}

void	print_board(long int board, int depth)
{
	char c;

	if (depth > 1)
		print_board(board / 10, depth - 1);
	c = board % 10 + 48;
	write(1, &c, 1);
}

int		q(long int board, int depth, int count)
{
	int i;
	int sum;

	sum = count;
	if (!is_valid(board, depth))
		return (0);
	if (depth > 9)
	{
		print_board(board, depth);
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while (i < 10)
	{
		sum += q(board * 10 + i, depth + 1, count);
		i++;
	}
	return (sum);
}

int		ft_ten_queens_puzzle(void)
{
	return (q(0, 0, 0));
}
