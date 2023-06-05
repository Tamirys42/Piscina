#include <unistd.h>

void ft_ft (int *nbr);

int main (void)
{
	int num;
	ft_ft (&num);
	return (0);
}

void ft_ft (int *nbr)
{
	*nbr = 42;
}
