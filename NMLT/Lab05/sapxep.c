#include<stdio.h>
#include<stdlib.h>
void Nhap(double a[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%lf", &a[i]);
	}
}

void Xuat(double a[], int n )
{
	for(int i = 0; i<n ;i++)
		printf("%.2lf ", a[i]);
}

int search (double a[], int n, double x)
{
	for(int i = 0 ; i<n;i++)
		if(a[i]==x)
			return i;
	return 0;
}
void Sapxep(double a[], int n)
{
	for(int i = 0; i<n-1 ;i++)
		for(int j = i+1; j<n ; j++)
			if(a[j]<a[i])
				{
					double temp= a[i];
					a[i] = a[j];
					a[j] = temp;
				}
}
int main()
{
	int n;
	double * a = (double*) malloc (n*sizeof(double));
	double x;
	do	
	{
		printf("N = ");
		scanf("%d", &n);
	}while(n<=0);
	
//Nhap day so 
	Nhap(a, n);
//Xuat day so 
	printf("\n");
	Xuat(a,n);
//Tim kiem
	printf("\n\nVui long nhap X = ");
	scanf("%lf", &x);
	if(search(a, n, x))
	{
		printf("Tim thay %.2lf tai vi tri a[%d] !", x, search(a,n,x));
	}
	else printf("Khong tim thay %.2lf !", x);
//Sap xep
	Sapxep(a,n);
// In 
	printf("\n\nDay so sau khi duoc sap xep : "); 
	Xuat(a, n);
	free(a);
	return 0;
	
	
}
