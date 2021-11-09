#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *chuan(char *str)
{
	const int len = strlen(str);
	str[len - 1] = '\0';
	return str;
}
int main()
{
	int i, j = 0, n;
	char a[100][100];
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		fgets(a[i], 100, stdin);
	}
	for (i = 0; i <= n; i++)
	{
		if (strcmp(a[i], "Nemo\n") == 0)
		{
			j = i;
		}
	}
	if (j == n)
	{
		printf("%s and %s", chuan(a[j - 1]), chuan(a[1]));
	}
	else
	{
		printf("%s and %s", chuan(a[j - 1]), chuan(a[j + 1]));
	}
}
