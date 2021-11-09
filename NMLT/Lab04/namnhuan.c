#include<stdio.h>

int isLY( int a)
{
	if(a%4==0){ 
		if(a%100!=0)
			return 1;
		else{ //Kiem tra cac nam co 2 so 0 o cuoi VD: 1900,1800,..
			if(a%400==0)
				return 1;
			else
				return 0;
			}
		}
	else 
		return 0;
}

int main()
{
	int i, a,b;
	do
	{
		printf("\n Vui long nhap 2 nam hop le : ");
		scanf("%d%d", &a, &b);
	}
	while(a<0||b<0);
	
	printf("Cac nam nhuan o giua %d va %d la : ",a,b);	
	
	for(i=a;i<=b;i++)
	{
		if(isLY(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}
