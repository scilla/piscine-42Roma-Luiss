/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:39:11 by scilla            #+#    #+#             */
/*   Updated: 2020/12/06 18:14:40 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive_print_base(int base_len, int nbr, char *base)
{
	char	c;
	int		mod;

	if (nbr >= base_len || nbr <= -base_len)
		recursive_print_base(base_len, nbr / base_len, base);
	mod = nbr % base_len;
	if (mod < 0)
		mod *= -1;
	c = base[mod];
	write(1, &c, 1);
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	int i;

	base_len = 0;
	while (base[base_len])
	{
		i = 0;
		while (i < base_len)
		{
			if (base[i] == base[base_len] || base[i] == 43 || base[i] == 45)
				return ;
			i++;
		}
		base_len++;
	}
	if (base_len < 2)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	recursive_print_base(base_len, nbr, base);
	return ;
}
