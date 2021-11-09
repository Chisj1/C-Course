#include<stdio.h>

int main()
{
	double a[100], sum=0, min, max;
	int n, count =0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(int i = 0; i<n;i++)
	{
		printf("Nhap a[%d] = ",i);
		scanf("%lf", &a[i]);
	}	
	max=a[0] ; min=a[0];
	for(int i = 0;i<n;i++)
	{
		if(max<a[i])	
			max=a[i];
		if(min>a[i])
			min=a[i];
		sum += (a[i]>0) ? a[i] : 0;
		count += (a[i]<0) ? 1 : 0;
	}
	printf("Phan tu nho nhat la %.2lf\n", min);
	printf("Phan tu lon nhat la %.2lf\n", max);
	printf("Tong cac phan tu duong : %.2lf\n", sum);
	printf("So phan tu am : %d", count);
}
