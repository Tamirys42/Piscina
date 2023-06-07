#include <unistd.h>
//#include <stdio.h>
#define TRUE 1
#define FALSE 0

int ft_str_is_numeric (char *str);

int main (void)
{
	char string [] = {'1', '2', '3'};
	int resultado;
	resultado = ft_str_is_numeric (string);
//	printf ("%d\n", resultado);

	return (0);
}

int ft_str_is_numeric(char *str)
{
	int i;
	i = 0;

	if (str[i] == '\0')
		return TRUE;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		       i++;
		else 
			return FALSE;
	}
return TRUE;
}
