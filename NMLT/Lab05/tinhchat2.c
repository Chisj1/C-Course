#include<stdio.h>
#include<stdlib.h>
void Nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
}

void Xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);
}

void Chen(int *a, int n, int vt, int x)
{
	for(int i=n;i>vt;i--){
		a[i] = a[i-1];
	}
	a[vt] = x;
	
}
int Timpt(int *a, int n, int x)
{
	 for(int i = 0 ; i<n;i++)
		if(a[i]==x)
			return i;
	return 0;
}
void Xoa(int *a, int n, int x)
{
	int vt = Timpt(a, n, x);
	if(vt)
		for(int i =vt;i<n;i++)
			a[i] = a[i+1];
	
}

int main()
{
	int n;
	do
	{
		printf("N = ");
		scanf("%d", &n);
		
	}while(n<=0);
	int * a= (int *) malloc (n*sizeof(int)); 
	//Nhap
	printf("Nhap day so : ");
	Nhap(a, n);
	//Xuat
	printf("Day so vua nhap la : "); 
	Xuat(a,n);
	
	//Chen 
	int x, vt;
	printf("\nNhap phan tu x muon chen : ");
	scanf("%d", &x);
	do
	{
		printf("Nhap vi tri muon chen (0<=vt<=n-1)  ");
		scanf("%d", &vt);
	}while(vt<0||vt>=n);
	Chen(a, n, vt, x);
	printf("Mang sau khi chen them %d la ", x);
	Xuat(a,n+1);
	
	//Xoa phan tu x;
	printf("\nNhap phan tu x xuon xoa : ");
	scanf("%d", &x);
	if(Timpt(a, n, x))
	{
		Xoa(a, n, x);
		printf("Mang sau khi xoa di %d la ", x);
		Xuat(a, n);
	}
	else 
		printf("Khong tim thay %d trong mang !", x);
	free(a);
	return 0;
}













