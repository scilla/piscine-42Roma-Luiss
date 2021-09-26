/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:06:12 by scilla            #+#    #+#             */
/*   Updated: 2020/12/09 19:47:21 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	print_args(int argc, char **argv)
{
	int i;
	int p;

	i = 1;
	while (i < argc)
	{
		p = 0;
		while (argv[i][p])
			write(1, &argv[i][p++], 1);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

int		main(int argc, char **argv)
{
	int		i;
	int		p;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		p = 1;
		while (p < argc - i - 1)
		{
			if (ft_strcmp(argv[p], argv[p + 1]) > 0)
			{
				temp = argv[p];
				argv[p] = argv[1 + p];
				argv[1 + p] = temp;
			}
			p++;
		}
		i++;
	}
	print_args(argc, argv);
	return (0);
}
