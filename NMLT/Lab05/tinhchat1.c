#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
}

int Nguyento(int n)
{
	if(n<=1) return 0;
	else if(n==2) return 1;
	else
	{
		for(int i =2;i<=sqrt(n);i++)
		{
			if(n%i==0) return 0;		
		}
		return 1;
	}
}
void Xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
		if(Nguyento(a[i]))
			printf("%d ", a[i]);
}
void Sapxep(int a[], int n)
{
	for(int i = 0; i<n-1 ;i++)
		for(int j = i+1; j<n ; j++)
			if(a[j]>a[i])
				{
					int temp= a[i];
					a[i] = a[j];
					a[j] = temp;
				}
}

int main()
{
	int n;
	int * a = (int *) malloc (n*sizeof(int));
	do
	{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while(n<=0);
	//Nhap
	printf("Nhap day so : ");
	Nhap(a,n);
	//Xuat
	printf("Cac so nguyen to trong mang la : ");
	Xuat(a,n);
	//Sap xep va In 
	printf("\nCac so nguyen to duoc sap xep la : ");
	Sapxep(a,n);
	Xuat(a,n);
	free(a);
	return 0;
	
}


