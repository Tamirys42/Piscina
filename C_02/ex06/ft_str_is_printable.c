#include <stdio.h>

int ft_str_is_printable(char *str);

int main (void)
{
	char str[] = "\n";
	int resultado = ft_str_is_printable (str);
	printf ("%d\n", resultado);
	return 0;
}

int ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
			return 0;
		else 
			i++;
	}
		return 1;
}

