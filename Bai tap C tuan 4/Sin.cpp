#include<stdio.h>
#include<math.h>
int main(){
double tu=1, mau=1,x,sum=0, oldSum=0;
int i=1;
int dau = 1;
scanf("%lf", &x);
tu=x;
do
{
	tu *= x*x;
	i += 2;
	mau *= (i-1)*i;
	dau *= -1;
	oldSum = sum;
	sum += dau*tu/mau;
}
while (i<13);
printf("%.4lf",x+ sum);
}
