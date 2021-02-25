#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *nbr)
{
    *nbr = 42;

}

int main()
{
	int a = 25;
	int *ptr = &a;

	printf("%d", *ptr);

	ft_ultimate_ft(*ptr);

	printf("%d", *ptr);

}
