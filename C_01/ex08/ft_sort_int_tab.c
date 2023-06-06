#include <unistd.h>
//#include <stdio.h>

void ft_sort_int_tab (int *tab, int size);

int main (void)
{
	int array[] = {1, 3, 5, 9, 10, 2};
	int tam;
	
	tam = sizeof (array) / sizeof (array[0]);
	ft_sort_int_tab (array, tam);

	/*int i;
	for (i=0; i<tam; i++)
		printf ("%d ", array[i]);*/
	
	return (0);
}

void ft_sort_int_tab (int *tab, int size)
{
	int troca;
	int i;

	i = 0;

	while (i < (size -1))
	{
		if (tab [i] > tab[i+1])
		{
			troca = tab[i];
			tab[i] = tab[i+1];
			tab[i+1]=troca;
			i  = 0;
		}
		else
			i++;
	}
}
