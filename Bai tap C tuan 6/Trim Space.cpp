#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], b[100];
	int i, j = 0;
	scanf("%[^\n]", a);
	for (i = 0; i < strlen(a); i++)
	{
		j++;
		if (a[i] != ' ')
		{
			break;
		}
	}
	for (i = 0; i < j - 1; i++)
		printf(" ");
	for (i = j - 1; i < strlen(a); i++)
	{
		if (a[i] == ' ' && a[i + 1] == ' ')
			continue;
		printf("%c", a[i]);
	}
}
