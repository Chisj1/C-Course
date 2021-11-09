#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int i, j, k, h;
	int f;
	int a, b, c, d;
	scanf("%d", &n);
	//In ra nua tren
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("* ");
		}
		for (k = 0; k <= 2 * (n - i) - 2; k++)
		{
			printf(". ");
		}
		for (h = 0; h <= i; h++)
		{
			printf("* ");
		}
		printf("\n");
	}
	//in ra phan giua

	for (f = 0; f < 2 * n + 1; f++)
	{
		printf("* ");
	}
	printf("\n");

	//In ra nua duoi
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n - i - 1; j++)
		{
			printf("* ");
		}
		for (k = 0; k <= 2 * i; k++)
		{
			printf(". ");
		}
		for (h = 0; h <= n - i - 1; h++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
