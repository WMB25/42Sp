#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int main(void)
{
	int a = 4, b = 2, div = 0, mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf("%d = div; %d = mod", div, mod);

	return (0);
}
