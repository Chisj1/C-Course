#include <stdio.h>
int main()
{
	//This shit dont work on web but manual run just fine
	// So tru di 48   1=48
	//A=65 J=74 Q=81 K=74
	int a[2];
	int sum = 0;
	int i = 0;

	scanf("%s %s", &a[0], &a[1]);
	for (i = 0; i < 2; i++)
	{
		if (a[i] > 47 & a[i] < 59)
		{
			sum += a[i] - 48;
		}
	}
	for (i = 0; i < 2; i++)
	{
		if (a[0] == a[1] && a[1] == 65)
		{
			sum = 2;
		}
		else
		{
			if (a[i] == 65 && a[i] != a[i + 1])
			{
				sum += 11;
			}
			else
			{
				if (a[i] > 58)
				{
					sum += 10;
				}
			}
		}
	}
	printf("%d", sum);
}
