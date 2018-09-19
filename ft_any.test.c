#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));

int	ft_check_a_is_first(char *chartab)
{
	if (chartab[0] == 'a')
		return (1);
	return (0);
}

int		main()
{
	char *test1[] =  {"fdrd", "azer", "w21", "st", 0};
	char *test2[] =  {"fdrd", "hyzer", "w21", "st", 0};
	char *test3[] =  {"adrd", "azer", "w21", "st", 0};
	char **test;

	test = test1;
	printf ("ft_any must return 1 if one element of the array returns 1\n");
	if (ft_any (test, &ft_check_a_is_first) != 1)
	{
		printf ("error: ft_any returned %d", ft_any (test, &ft_check_a_is_first));
		return (1);
	}
	printf ("OK\n");
	test = test2;
	printf ("ft_any must return 0 if no element of the array returns 1\n");
	if (ft_any (test, &ft_check_a_is_first) != 0)
	{
		printf ("error: ft_any returned %d", ft_any (test, &ft_check_a_is_first));
		return (1);
	}
	printf ("OK\n");
	test = test3;
	printf ("ft_any must return 1 if several elements of the array return 1\n");
	if (ft_any (test, &ft_check_a_is_first) != 1)
	{
		printf ("error: ft_any returned %d", ft_any (test, &ft_check_a_is_first));
		return (1);
	}
	printf ("OK\n");
	printf ("ft_any: OK\n");
	return 0;
}
