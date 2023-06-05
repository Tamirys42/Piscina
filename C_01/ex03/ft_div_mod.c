#include <unistd.h>
//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main (void)
{
	int a;
	int b;
	int resultado;
	int resto;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &resultado, &resto);
	//printf ("RESULTATO DE %d / %d = %d\n", a, b, resultado);
	//printf ("RESTO DA DIVISÃO DE %d POR %d = %d", a, b, resto);
	return (0);
}

void ft_div_mod (int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
