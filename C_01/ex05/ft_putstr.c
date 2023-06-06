#include <unistd.h>
#define TAM 30

void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(void)
{
	char	string[TAM] = {'H', 'e', 'l', 'l', 'o', ' ',  'W', 'o', 'r', 'd', '\0'};
	ft_putstr(string);
	return (0);
}

void ft_putstr (char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		ft_putchar (str[i]);
		i++;
	}
		ft_putchar ('\n');
}

void ft_putchar (char c)
{
	write (1, &c, 1);
}
	
