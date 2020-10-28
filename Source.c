#pragma warning (disable:4996)

#include <stdio.h>
#include <conio.h>

float product(float a, float b, float c);

int main()
{
	float a, x, y, z;

	printf("Type three numbers, separated by spaces: ");
	scanf("%f %f %f", &x, &y, &z);
	a = product(x, y, z);
	printf("%f * %f * %f = %f\n", x, y, z, a);

	_getch();
	return(0);
}

float product(float a, float b, float c)
{
	float p;

	p = a * b * c;
	return(p);
}