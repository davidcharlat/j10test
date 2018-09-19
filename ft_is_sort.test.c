#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_stupid(int a, int b)
{
	return (a - b);
}

int	main()
{
	int	test1[] = {1,2,6,9,10,15};
	int	test2[] = {10,9,5,5,0,-6};
	int	test3[] = {1,2,3,6,7,0};
	int	test4[] = {10,1,2,3,4,5};
	int *test;

	test = test1;
	printf ("ft_is_sort must return 1 if the array is sorted by ascending order\n");
	if (ft_is_sort (test, 6, &ft_stupid) != 1)
	{
		printf ("error: ft_is_sort returned %d", ft_is_sort (test, 6, &ft_stupid));
		return (1);
	}
	printf ("OK\n");
	test = test2;
	printf ("ft_is_sort must return 1 if the array is sorted by descending order\n");
	if (ft_is_sort (test, 6, &ft_stupid) != 1)
	{
		printf ("error: ft_is_sort returned %d", ft_is_sort (test, 6, &ft_stupid));
		return (1);
	}
	printf ("OK\n");
	test = test3;
	printf ("ft_is_sort must return 0 if the array isn't sorted because of the last value\n");
	if (ft_is_sort (test, 6, &ft_stupid) != 0)
	{
		printf ("error: ft_is_sort returned %d", ft_is_sort (test, 6, &ft_stupid));
		return (1);
	}
	printf ("OK\n");
	test = test4;
	printf ("ft_is_sort must return 0 if the array isn't sorted because of the first value\n");
	if (ft_is_sort (test, 6, &ft_stupid) != 0)
	{
		printf ("error: ft_is_sort returned %d", ft_is_sort (test, 6, &ft_stupid));
		return (1);
	}
	printf ("OK\n");
	printf ("ft_is_sort must return 1 if the array's length is 1\n");
	if (ft_is_sort (test, 1, &ft_stupid) != 1)
	{
		printf ("error: ft_is_sort returned %d", ft_is_sort (test, 1, &ft_stupid));
		return (1);
	}
	printf ("OK\n");
	printf ("ft_is_sort: OK\n");
	return 0;
}
