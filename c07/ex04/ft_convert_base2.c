/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:50:29 by scilla            #+#    #+#             */
/*   Updated: 2020/12/10 16:34:49 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_in_base(char c, char *base)
{
	unsigned i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_sign(char *str, unsigned int *pi)
{
	int sign;
	int i;

	i = *pi;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*pi = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	int				sign;
	int				res;
	int				base_len;

	i = 0;
	res = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (0);
	while (((str[i] > 8 && str[i] < 14) || str[i] == 32)
			&& is_in_base(str[i], base) == -1)
		i++;
	sign = get_sign(str, &i);
	while (is_in_base(str[i], base) != -1)
	{
		res *= base_len;
		res += is_in_base(str[i++], base) * sign;
	}
	return (res);
}
