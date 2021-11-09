#include<stdio.h>
#include<stdlib.h>

void intToRoman (char * path)
{	int n;
	FILE *f = fopen(path, "r");
//	while(!feof(f))
		fscanf(f, "%d", &n);
	int a[4];
	for (int i=3;i>=0;i--)
	{
		a[i] = n%10;
		n = n/10;
	}
	if(a[0]<=3)
	{
		while(a[0]--) printf("M");
	}
	//
	if(a[1]<=3)
		while(a[1]--) printf("C");
	else if(a[1]==4) printf("CD");
	else if(a[1] < 9 )
	{	
		printf("D");
		int tram = a[1]-5;
		while(tram--) printf("C");
	}
	else printf("CM");
	
	if(a[2]<=3)
		while(a[2]--) printf("X");
	else if(a[2]==4) printf("XL");
	else if(a[2] < 9 )
	{
		printf("L");
		int chuc = a[2]-5;
		while(chuc--) printf("X");
	}
	else printf("XC");
	
	if(a[3]<=3)
		while(a[3]--) printf("I");
	else if(a[3]==4) printf("IV");
	else if(a[3] < 9 )
	{
		printf("V");
		int dv=a[3]-5;
		while(dv--) printf("I");
	}
	else printf("IX");
}

int main()
{
	
}
