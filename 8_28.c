#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
int is_prime(int a)
{
	int i = 0;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	if (is_prime(n) == 1)
		printf("is prime");
	else
		printf("not prime");
	double i = sqrt(n);
	printf("%lf\n", i);
	return 0;
}
