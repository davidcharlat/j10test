#include <stdio.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putAA(int nb)
{
	printf("AA");
}

int		main()
{
	int tab[3] = {1,2,7};
	ft_foreach(tab, 3, &ft_putAA);
	return 0;
}
