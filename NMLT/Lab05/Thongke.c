#include<stdio.h>
#include<math.h>
void Nhap(double a[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%lf", &a[i]);
	}
}

double Trungbinh(double a[], int n)
{
	double avg=0;
	for(int i=0;i<n;i++)
		avg += a[i];
	return avg/n;
}
double Dolechchuan(double a[], int n)
{
	double avg = Trungbinh(a, n);
	double lech=0;
	for(int i=0;i<n;i++)
		lech += pow((a[i]-avg), 2);
	return sqrt(lech/n);
		
}
int main()
{
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n<=0);
	double a[n];
	Nhap(a,n);
	printf("Ky vong cua day so : %.2lf\n", Trungbinh(a,n));
	printf("Do lech chuan cua day so : %.2lf" ,Dolechchuan(a,n));
	return 0;
}
