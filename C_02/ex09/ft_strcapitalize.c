#include <stdio.h>
char *ft_strcapitalize (char *str);

int main (void)
{
	char str[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize (str);
	printf ("%s\n", str);
	return 0;
}

char *ft_strcapitalize (char *str)
{
	int i;
	i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -=32;
	while (str[i] != '\0')
	{
		if((str[i-1] <= 47) || ((str[i-1] >= 58 && str[i-1] <= 64)))
		{
			if (str[i]>='a' && str[i] <= 'z')
		       		str[i] -= 32;
			else// if (str[i-1] >= '0' && str[i-1] <= '9')
				str[i]=str[i];
		}
		i++;
	}
	return (str);
}
