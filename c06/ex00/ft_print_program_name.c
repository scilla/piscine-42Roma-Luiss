/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:42:19 by scilla            #+#    #+#             */
/*   Updated: 2020/12/09 19:42:57 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	while (*argv[0])
	{
		write(1, argv[0]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
