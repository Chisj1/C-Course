#include<stdio.h>
#include<string.h>

int wCount(char *h, char *a)
{
	int count=0;
	int len = strlen(a);
	if(a[len-1] == '\n') 
		a[len-1] = '\0';
	for(int i = 1;i<len;i++)
			{
				if(a[i]==' ') continue;
				if(strchr(h,a[i])==NULL)
					break;
				if(i==len-1)
					count++;
			}
	return count;
}

int findWords (char * path )
{
	FILE *f = fopen(path, "r");
	char a[100][100];
	int i=0;
	int n=0;
	char str[100];
	while(!feof(f))
	{
		fgets(a[i], sizeof(a[i]), f);
		i++;
		n++;
	}
	int count=0;
	char h[3][30];
	strcpy(h[0],"qwertyuiopQWERTYUIOP");strcpy(h[1],"ASDFGHJKLasdfghjkl");strcpy(h[2],"zxcvbnmZXCVBNM");
	for(i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(strchr(h[j],a[i][0])!=NULL)
			{
				count+= wCount(h[j],a[i]);
				break;
			}
			else 
				continue;
		}
	}
	return count;
}

int main()
{
	char a[100];
	printf("%d", findWords("path.txt"));
}
