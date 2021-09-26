#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include "ft_show_tab.c"
#include "ft_strs_to_tab.c"

int main()
{
	t_stock_str *arr;
	char **ss;
	
	ss = malloc(sizeof(char**) * 3);
	ss[0] = "prima stringa\0";
	ss[1] = "altra\0";
	ss[2] = "ancora\0";
	arr = ft_strs_to_tab(3, ss);
	ft_show_tab(arr);
	return (0);
}