#include<stdio.h>
#include<math.h>
int isAm(int so)
{
	int a=so/100;
	int b=so/10%10;
	int c=so%10;
	if(so==pow(a,3)+pow(b,3)+pow(c,3)) return 1;
	return 0;
}

int main()
{
	int count=0,i;
	printf("Cac so Armstrong tu 100 den 999 la : ");
	for(i=100;i<=999;i++)
	{
		if(isAm(i)) 
		{
			printf("%d ", i);	
			count++;
		}
	}
	printf("\nCo tong cong : %d so ", count);
	return 0;
}
