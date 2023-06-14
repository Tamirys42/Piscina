#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int  nb, int power) {
  // caso base => expoente == zero
  if (power == 0) {
    if (nb == 0)
      return 1;  // 0^0 = 1
    else
      return 1;  // qualquer num^0 = 1
  }

  // expoente negativo retorna zero
  if (power < 0) {
    return 0; 
  }

  // caso geral => expoente maior que zero
  return nb * ft_recursive_power(nb, power - 1);
}

int main() {
	int base = 3;
	int expoente = 4;
  int potencia = ft_recursive_power(base, expoente);
  printf ("%d elevado a %d = %d\n", base, expoente, potencia);
  return 0;
}

