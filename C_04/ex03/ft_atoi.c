#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str);

int main (void)
{
	char str[]="    ---+--+1234a4567";
	printf ("%d\n", ft_atoi(str));
	return 0;
}

int ft_atoi(char *str)
{
	int negativos;
	int numero;
/*"The string can start with an arbitray amount of white space". 
 * Pulando os espaços / control characters exibidos no man 3 isspace
	De acordo com o man 3 isspace, temos 6 tipos de "white-spaces characters" que são testados: \t \n \v \f \r e o próprio espaço. 
	Na tabela ASCII esses caracteres estão entre os números 9 e 13 e 32 (o espaço)*/
 while ((*str >= 9 && *str <= 13) || *str == 32)
	 str++;
 
/* The string can be followed by an arbitrary amount of + and - signs, - sign will change
the sign of the int returned based on the number of - is odd or even*/ 
negativos = 0;
while (*str == '+' || *str == '-')
{
if (*str =='-') // se o sinal for negativo, adiciona 1 ao contador de negativos
negativos++;
str++; // pulando os sinais de menos e mais
}

/*Your function should read the string until the string stop following the rules and return
the number found until now*/
numero = 0;
 while (*str >= 48 && *str <= 57) // código na ASCII para os números de 0 a 9. Usando  exemplo 12
{
	numero *= 10; 
	numero += *str -  48; // numero = numero + *str - zero em ASCII -> convertendo char em int e guardando na variavel numero
			    //1looop numero = 0 * 10                    2loop numero = 1 *10; 
			    //1loop numero = (0 + 1) -  48              2loop numero = (10 + 2) - 48
			    //1loop 49 (ASCII 1) - 48                   2loop (10 +50 (2 em ASCCI) - 48
			    //1loop 1                                   2loop 12
	str++;
}

// -(minus)  sign will change the sign of the int returned based on the number of - is odd or even.
if (negativos % 2 == 0)
	return (numero);
return (-numero);
}
