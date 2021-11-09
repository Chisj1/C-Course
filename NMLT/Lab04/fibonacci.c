#include<stdio.h>
#include<stdlib.h>
int fiBo(int n) //Dequy
{
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fiBo(n-2)+fiBo(n-1);

}
int kfiBo(int n)//Khong De quy
{
	int a[n]	;
	a[0] =0;
	a[1] =1;
	if(n==0) return 0;
	else if(n==1) return 1;
	else
		for(int i=2;i<=n;i++)
			a[i] = a[i-1] +a[i-2];
	return a[n];
}
int kmfiBo(int n) //Khong Mang Khong De qUY
{
	int old1 =0 ,old2=1, sum=0;
	
	for(int i=0;i<n;i++)
		{
			sum = old1+old2;
			old2=old1;
			old1 = sum;
		}
	return sum;
}

int main()
{
	printf("10 so fibonanci dau tien la : ");
	for(int i=0;i<10;i++)
	printf("%d ", kmfiBo(i));
	return 0;
}
