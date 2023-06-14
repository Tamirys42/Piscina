#include <stdio.h>

int ft_recursive_factorial(int nb) {
    if (nb < 0) {
        return 0;  //input inválido
    } else if (nb == 0 || nb == 1) {
        return 1;  //caso base
    } else {
        return nb * ft_recursive_factorial(nb - 1);  //caso geral
    }
}

int main(void) {
    int num = 5;    

    int result = ft_recursive_factorial(num);
    printf("Fatorial de %d = %d\n", num, result);

    return 0;
}

