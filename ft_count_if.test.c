#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_check_ab_is_first(char *chartab)
{
	if (chartab[0] == 'a')
		return (1);
	if (chartab[0] == 'b')
		return (2);
	return (0);
}

int		main()
{
	char *test1[] =  {"fdrd", "azer", "w21", "st", 0};
	char *test2[] =  {"bdrd", "byzer", "w21", "st", 0};
	char *test3[] =  {"adrd", "azer", "w21", "st", 0};
	char **test;

	test = test1;
	printf ("ft_count_if must return 1 if one element of the array returns 1\n");
	if (ft_count_if (test, &ft_check_ab_is_first) != 1)
	{
		printf ("error: ft_count_if returned %d", ft_count_if (test, &ft_check_ab_is_first));
		return (1);
	}
	printf ("OK\n");
	test = test2;
	printf ("ft_count_if must return 0 if no element of the array returns 1, even if some return 2\n");
	if (ft_count_if (test, &ft_check_ab_is_first) != 0)
	{
		printf ("error: ft_count_if returned %d", ft_count_if (test, &ft_check_ab_is_first));
		return (1);
	}
	printf ("OK\n");
	test = test3;
	printf ("ft_count_if must return 2 if 2 elements of the array return 1\n");
	if (ft_count_if (test, &ft_check_ab_is_first) != 2)
	{
		printf ("error: ft_count_if returned %d", ft_count_if (test, &ft_check_ab_is_first));
		return (1);
	}
	printf ("OK\n");
	printf ("ft_count_if: OK\n");
	return 0;
}
