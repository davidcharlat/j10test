#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	ft_add3(int nb)
{
	return (nb + 3);
}

int		main()
{
	int tab[3] = {1,2,7};
	int expect[3] = {4,5,10};
	int *res;
	int i = 0;
	
	res = ft_map(tab, 3, &ft_add3);
	while (i < 3)
	{
		if (res[i] != expect[i])
		{
			printf ("error: cell n°%d : expected %d, received %d\n", i, expect[i], res[i]);
			return (1);
		}
		i++;
	}
	free (res);
	printf ("ft_map: OK\n");
	return 0;
}
