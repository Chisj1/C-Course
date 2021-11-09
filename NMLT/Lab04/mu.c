#include<stdio.h>
int Ng(double n)
{
	if(n==(int)n&&n>0) return 1;
	else return 0;
}

double Power(double x, unsigned int n)
{
	if(n==1) return x;
	else return x*Power(x,n-1);
}

int main()
{
	double a,b,c,d;
	printf(" Chuong trinh tinh A = 2*a^b + 5*c^d -10 \n");
	do
	{
		printf("Vui long nhap a,b,c,d (Luu y b va d nguyen duong) : ");
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d) ;
	}while(!Ng(b)||!Ng(d));
	
	printf("A= %.2lf", 2*Power(a,(unsigned int)b) + 5*Power(c,(int)d) - 10);
	
	return 0;
}
