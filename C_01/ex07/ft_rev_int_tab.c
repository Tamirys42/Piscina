#include <unistd.h>
//#include <stdio.h>

void ft_rev_int_tab (int *tab, int size);

int main (void)
{
	int vetor [] = {1, 2, 3, 4, 5};
	int  tamanho;
	int i;

	tamanho = sizeof(vetor) / sizeof(vetor[0]);
	ft_rev_int_tab (vetor, tamanho);

	//printf ("%d\n", tamanho)
		;
	/*for (i=0; i<tamanho; i++)
		printf ("%d ", vetor[i]);*/
	return (0);
}

void ft_rev_int_tab (int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	 while (i < (size/2))
	 {
		 temp = tab [i];
		 tab [i] = tab [size - i - 1];
		 tab [size - i - 1] = temp;
		 i++;
	 }
}

	
