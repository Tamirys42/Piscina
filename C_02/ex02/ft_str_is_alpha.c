#include <unistd.h>
#include <stdio.h>

int  ft_str_is_alpha(char *str);

int main (void)
{
	char string[]="";
	int resultado;

	resultado =  ft_str_is_alpha (string);

	printf ("%d\n", resultado);

	 return (0);
}

int ft_str_is_alpha (char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <=  'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[0] == '\0'))
		       i++;
		else
			return (0);
	}
return (1);
}

