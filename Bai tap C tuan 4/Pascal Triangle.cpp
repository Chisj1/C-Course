#include <stdio.h>
#include <math.h>

int giaiThua(int n)
{
	int f;
	for (f = 1; n > 1; n--)
		f *= n;
	return f;
}
int toHop(int n, int r)
{
	return giaiThua(n) / (giaiThua(r) * giaiThua(n - r));
}
int main()
{
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", toHop(i, j));
		}
		printf("\n");
	}
}
