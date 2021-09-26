#include <stdio.h>
#include "ft_strs_to_tab.c"

int main()
{
	t_stock_str *arr;
	char **ss;
	int i;
	
	i = 0;
	ss = malloc(sizeof(char**) * 3);
	ss[0] = "prima stringa";
	ss[1] = "altra";
	ss[2] = "ancora";
	arr = ft_strs_to_tab(3, ss);
	while (arr->str[0])
	{
		printf("%s\n", arr->str);
		printf("%d\n", arr->size);
		printf("%s\n", arr->copy);
		arr++;
		i++;
	}
	printf("struct [%d] str first char val is %d\n", i, (int)arr->str[0]);
	return (0);
}
