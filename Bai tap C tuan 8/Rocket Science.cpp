#include<stdio.h>
#include<math.h>
#include<string.h>
double veSo(char *b)
{
	double res;
	int i;
	if(strchr(b,'-')==NULL)
	{
		res=(b[0]-48);
		i=1;
	}
	else
	{
		res=(b[1]-48);
		i=2;
	}
	if(strchr(b,'.')!=NULL)
	{
		while(b[i]!='.')
	{
		res = res*10+b[i++]-48;
	}
		i++;
		int j=10;
		while(i<strlen(b))
		{
			res += (b[i++]-48.0) /j;
			j*=10;
		}
		return (strchr(b,'-')==NULL) ? res : -res;
	}
	else
	{
		while(i<strlen(b))
		{
			res = res*10+b[i++]-48;
		}
		return (strchr(b,'-')==NULL) ? res : -res;
	}

}
double estimatedTime(const char* path)
{
	//48-57
	FILE *f = fopen(path,"r");
	double x1,y1,x2,y2,ve;
	int n[5];
	char a[3][100];
	for(int i=0;i<3;i++)
		fgets(a[i], sizeof(a[i]), f);
	char b[5][100];
	int count=7;
		for(int i=7,j=0;'0'<=a[0][i]&&a[0][i]<='9'||a[0][i]=='.'||a[0][i]=='-';)
		{
			b[0][j++]=a[0][i++];
			count++;
		}
	 	for(int i=count+4,j=0;'0'<=a[0][i]&&a[0][i]<='9'||a[0][i]=='.'||a[0][i]=='-';)
		{
			b[1][j++]=a[0][i++];
		}
		count=7;
		for(int i=7,j=0;'0'<=a[1][i]&&a[1][i]<='9'||a[1][i]=='.'||a[1][i]=='-';)
		{
			b[2][j++]=a[1][i++];
			count++;
		}
	 	for(int i=count+4,j=0;'0'<=a[1][i]&&a[1][i]<='9'||a[1][i]=='.'||a[1][i]=='-';)
		{
			b[3][j++]=a[1][i++];
		}
		for(int i=10,j =0;'0'<=a[2][i]&&a[2][i]<='9'||a[2][i]=='.';)
		{
			b[4][j++]=a[2][i++];
		}
		for(int i=0;i<5;i++)
		{
			int len = strlen(b[i]);
			if(b[i][len-1]>'9'||b[i][len-1]<'0') b[i][len-1] = '\0';
		}
		x1=veSo(b[0]);
		x2=veSo(b[2]);
		y1=veSo(b[1]);
		y2=veSo(b[3]);
		ve=veSo(b[4]);
		return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/ve ;
}

