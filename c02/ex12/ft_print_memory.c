/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:14:20 by scilla            #+#    #+#             */
/*   Updated: 2020/12/02 11:33:58 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	address(void *addr)
{
	char	str_addr[16];
	int		i;
	int		int_addr;

	int_addr = (int)addr;
	i = 0;
	while (i < 16)
	{
		str_addr[i] = "0123456789abcdef"[int_addr % 16];
		int_addr /= 16;
		i++;
	}
	while (i > 0)
	{
		write(1, &str_addr[i - 1], 1);
		i--;
	}
	write(1, ": ", 2);
	return ;
}

void	hex_value(void *addr, unsigned int size)
{
	unsigned int	cursor;
	int				*addr_off;
	unsigned char	b;

	cursor = 0;
	while (cursor < 16)
	{
		if (cursor < size)
		{
			addr_off = addr + cursor;
			b = *addr_off;
			write(1, &"0123456789abcdef"[b / 16], 1);
			write(1, &"0123456789abcdef"[b % 16], 1);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (!((cursor + 1) % 2))
			write(1, " ", 1);
		cursor++;
	}
	return ;
}

void	print_value(void *addr, unsigned int size)
{
	unsigned int	cursor;
	int				*addr_off;
	unsigned char	b;

	cursor = 0;
	while (cursor < size)
	{
		addr_off = addr + cursor;
		b = *addr_off;
		if (b >= 32 && b <= 126)
			write(1, &b, 1);
		else
			write(1, ".", 1);
		cursor++;
	}
	return ;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int cursor;
	unsigned int row_size;

	cursor = 0;
	while (size > 0)
	{
		row_size = size;
		if (row_size > 16)
			row_size = 16;
		size -= row_size;
		address(addr + cursor);
		hex_value(addr + cursor, row_size);
		print_value(addr + cursor, row_size);
		write(1, "\n", 1);
		cursor += row_size;
	}
	return (addr);
}
