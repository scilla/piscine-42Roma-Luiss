/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:30:14 by scilla            #+#    #+#             */
/*   Updated: 2020/12/06 17:33:21 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_nb(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	else if (!nb)
	{
		write(1, "0", 1);
		return (0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	char	nb_str[10];
	int		i;
	char	c;

	i = 0;
	if (!check_nb(nb))
		return ;
	while (nb)
	{
		nb_str[i] = nb % 10;
		if (nb_str[i] < 0)
			nb_str[i] *= -1;
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		c = nb_str[i - 1] + 48;
		write(1, &c, 1);
		i--;
	}
	return ;
}
