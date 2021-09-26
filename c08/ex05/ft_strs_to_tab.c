#include <stdlib.h>
#include "ft_stock_str.h"

int fn_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	int strl;
	int p;
	t_stock_str *arr;
	
	i = 0;
	arr = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (0);
	while (i < ac)
	{
		strl = fn_strlen(av[i]);
		(arr + i)->str = (char *)malloc(sizeof(char) * (strl + 1));
		arr[i].copy = (char *)malloc(sizeof(char) * (strl + 1));
		if (!arr[i].str || !arr[i].copy)
			return (0);
		p = 0;
		while (p < strl)
		{
			arr[i].str[p] = av[i][p];
			arr[i].copy[p] = av[i][p];
			p++;
		}
		arr[i].size = strl;
		i++;
	}
	arr[i].str = (char *)malloc(sizeof(char));
	arr[i].str[0] = 0;
	return (arr);
}