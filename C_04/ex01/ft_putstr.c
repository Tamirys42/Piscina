#include <unistd.h>

void ft_putstr(char *str);

int main (void)
{
	char str[] = "Hello World";
	ft_putstr (str);
	return 0;
}

void ft_putstr (char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
