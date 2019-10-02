#include <stdio.h>
#include <cmath>
long double Function(long double x);
int znamenatel = 0;
int main()
{
	const float XBEG = -1, XEND = 1, DX = 0.1;
	float slider = XBEG;
	printf("|   arguments  |    values         |    amount |\n");
	printf("------------------------------------------------\n");
	while (slider < XEND - DX)
	{
		slider += DX;
		printf("|%10.3f    |%15.10f    |%10d |\n", slider, Function(slider), znamenatel);
		printf("------------------------------------------------\n");
	}
	return 0;
}
long double Function(long double x)
{
	long double a = 1.0;
	long double chislitel = x;
	long double sum = 0.0; long double eps = 0.0000000000000000000000000001;
	znamenatel = 1;
	while (abs(a) >= eps)
	{
		a = chislitel / znamenatel;
		chislitel = chislitel * x * x;
		sum += a;
		znamenatel += 2;
	}
	return sum * 2;
}