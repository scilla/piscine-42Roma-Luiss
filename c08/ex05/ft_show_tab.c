/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 11:07:29 by scilla            #+#    #+#             */
/*   Updated: 2020/12/11 11:08:45 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_putnbr(int nb)
{
	char	s[10];
	int		i;
	int		mod;

	if (nb < 0)
		write(1, "-", 1);
	i = 0;
	while (nb != 0)
	{
		mod = nb % 10;
		if (mod < 0)
			mod *= -1;
		s[i] = mod + '0';
		nb /= 10;
		i++;
	}
	i--;
	if (i < 0)
		write(1, "0", 1);
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
	return ;
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str[0])
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}
