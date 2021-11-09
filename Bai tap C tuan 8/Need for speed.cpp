#include<stdio.h>
#include<string.h>
#include<stdlib.h>

double averageTime(const char* path)
{
	FILE *f = fopen(path, "r");
	int i = 0;
	char line[256];
	double a[100];
	int s[100];
	double sum = 0;
	while (fgets(line, 256, f))
	{
		if (i != 0)
		{
			sscanf(line, "%lf,%lf", &s[i - 1], &a[i - 1]);
			sum += a[i - 1];
		}
		i++;
	}
	return sum / (i - 1);
}

int main()
{
	printf("%lf\n", averageTime("path.csv") );
}
