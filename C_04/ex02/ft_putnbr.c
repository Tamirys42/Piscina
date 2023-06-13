#include <unistd.h>

void ft_putnbr(int nb);

int main (void)
{
	ft_putnbr (42);
	write (1, "\n", 1);
	return 0;
}

void ft_putnbr (int nb)
{
	long num_long;
	char str[10];
	int i;
	
	num_long = nb;
	i = 0;
	if (num_long == 0)
		write (1, "0", 1);
	if (num_long < 0)
	{
		num_long *= -1; 
		write (1, "-", 1);
	}
	while (num_long > 0)
	{
		str[i++] = (num_long%10) + 48; //pegando o último dígito do número, somando ZERO em ASCII para obter seu valor em ASCII/convertendo para char. E guardando na posição c[i]
		num_long /= 10; // pegando os primeiros (menos o último dígito) dígitos para continuar o loop do while.
	}
	while (i >= 0)
		write (1, &str[--i], 1); //começa a escrever o número de trás para frente
}
	
