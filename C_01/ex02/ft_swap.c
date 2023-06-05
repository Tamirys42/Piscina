#include <unistd.h>
//#include <stdio.h>

void ft_swap (int *a, int *b);

int main (void)
{
	int a = 5;
	int b = 10;
	//printf ("A:%d / B:%d\n", a, b);
	ft_swap (&a, &b);
	//printf ("A:%d / B:%d\n", a, b);
       return (0);
}

void ft_swap (int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
