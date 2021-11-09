#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("Hay nhap so phan tu : ");
	int n;
	int i=0;
	scanf("%d", &n);
	int* arr = (int*) calloc (n, n* sizeof(int));
	do
	{
		printf("Nhap phan tu Arr[%d] : ", i);
		scanf("%d", &arr[i]);
		i++;
	}while(i<n);
	
	printf("\nHay nhap gia tri can so sanh : ");
	int x;
	scanf("%d", &x);
	int j=0;
	for(i=0;i<n;i++)
		if(arr[i]>x)
			j++;
	if(j!=0)
	{
		printf("\nCac phan tu trong mang lon hon %d la : \n", x);
		for(i=0;i<n;i++)
			if(arr[i]>x)
				printf("|| Arr[%d] = %d \n",i,arr[i]);
	}
	else 
		printf("Trong mang khong co phan tu nao lon hon %d", x);
	free(arr);
	return 0;	
}
