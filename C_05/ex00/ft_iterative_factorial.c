#include <unistd.h>
#include <stdio.h>

int  ft_iterative_factorial(int nb) {
	int i = 2;
    if (nb < 0) {
        return 0;  // Input inválido
    } else if (nb == 0 || nb == 1) {
        return 1;  // Caso base do fatorial
    } else {
        int result = 1;
        while (i <= nb ) {
            result *= i;
	    i++;
        }
        return result;
    }
}

int main() {
    int num = 5;

    int result = ft_iterative_factorial(num);
    printf("Fatorial de %d = %d\n", num, result);

    return 0;
}

