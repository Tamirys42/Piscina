#include <unistd.h>
#include  <stdio.h>

int ft_iterative_power(int  nb, int power) {
    if (power < 0) {
        return 0;
    } else if (power == 0 && nb == 0) {
        return 1;
    } else if (power == 0) {
        return 1;
    } else {
        int potencia = 1;
        int i = 0;
        while (i < power) {
            potencia *= nb;
	    i++;
        }
        return potencia;
    }
}

int main (void) {
	int num = 5;
	int expoente = 2;
	int potencia = ft_iterative_power(num, expoente);
	printf ("%d elevado a %d = %d\n", num, expoente, potencia);
	return 0;
}
