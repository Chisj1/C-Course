#include<stdio.h>
int Ng(double n)
{
	if(n==(int)n&&n>0) return 1;
	else return 0;
}

unsigned int ucln(unsigned int x, unsigned int y)
{
	if(x==y) return x;
	else if(x>y) return ucln(x-y,y);
	else return ucln(x,y-x);
	
}

int main()
{
	double a,b;
	do{
		printf("\nVui long nhap 2 so nguyen duong : ");
		scanf("%lf%lf", &a,&b);
	}while(!Ng(a)||!Ng(b));
	printf("\n Uoc chung lon nhat cua %.0lf va %.0lf la %d" ,a,b,ucln(a,b));
	return 0;
	
}
