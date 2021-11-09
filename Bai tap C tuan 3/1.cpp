#include <stdio.h>
#include <string.h>
int main()
{
	int i, sum;
	char a[2], b[2];
	scanf("%s %s", &a, &b);

	if (strcmp(a, "A") == 0 && strcmp(b, "A") == 0)
		sum = 2;
	else
	{

		if (strcmp(a, "10") == 0)
			sum += 10;
		else
		{
			if (strcmp(a, "A") == 0)
				sum += 11;
			if (a[0] <= '9')
				sum += a[0] - 48;
			if (a[0] == 'J' || a[0] == 'Q' || a[0] == 'K')
				sum += 10;
		}
		if (strcmp(b, "10") == 0)
			sum += 10;
		else
		{
			if (strcmp(b, "A") == 0)
				sum += 11;
			if (b[0] <= '9')
				sum += b[0] - 48;
			if (b[0] == 'J' || b[0] == 'Q' || b[0] == 'K')
				sum += 10;
		}
	}
	printf("%d", sum);
}
