/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:55:37 by scilla            #+#    #+#             */
/*   Updated: 2020/12/10 17:03:48 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);

int		is_neg(int nbr)
{
	if (nbr < 0)
		return (1);
	return (0);
}

char	*str_base_to(int base_len, int nbr, char *base)
{
	int		i;
	char	*out;
	int		out_len;
	int		temp;
	int		or_nbr;

	or_nbr = nbr;
	temp = nbr;
	out_len = 0;
	while (temp && ++out_len > 0)
		temp /= base_len;
	out = malloc(sizeof(char) * out_len + 1 + is_neg(nbr));
	if (is_neg(nbr))
		out[0] = '-';
	i = 0;
	while (i < out_len)
	{
		temp = nbr % base_len;
		if (temp < 0)
			temp *= -1;
		out[out_len - i++ - 1 + is_neg(or_nbr)] = base[temp];
		nbr /= base_len;
	}
	out[out_len + is_neg(or_nbr)] = 0;
	return (out);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		i;
	char	*res;

	base_len = 0;
	while (base[base_len])
	{
		i = 0;
		if (base[base_len] == 43 || base[base_len] == 45)
			return (0);
		while (i < base_len)
		{
			if (base[i] == base[base_len])
				return (0);
			i++;
		}
		base_len++;
	}
	if (base_len < 2)
		return (0);
	res = str_base_to(base_len, nbr, base);
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int nbr_int;

	nbr_int = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(nbr_int, base_to));
}
