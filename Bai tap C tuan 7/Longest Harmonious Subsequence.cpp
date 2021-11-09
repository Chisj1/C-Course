#include<stdio.h>
#include<stdlib.h>

int max(int a,int b){
	if(a>b) return a;
	else return b;
}

void swap(int *a, int *b){
	int hv;
	hv=*a;
	*a=*b;
	*b=hv;
	
}
void sort(int arr[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(arr[j]<=arr[i]) swap(&arr[j],&arr[i]);
		}
	}
}

int findLHS(int arr[], int n){
	int	res = 0;
	int j=0;
	sort(arr,n);
	int* a = (int*) calloc (n,n*(sizeof(int)));
	int* b = (int*) calloc (n,n*(sizeof(int)));
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
			b[j]++;
		}
		else
		{
			a[j] =arr[i];
			j++;
		}
			
	}
	for(int i=0;i<=j;i++)
	{
		 if(a[i]+1==a[i+1])
		 {
		 	res = max(res,b[i]+b[i+1]);
		 }
	}
	return res+2;
}

int main(){
	int arr[100],n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d" ,&arr[i]);
	printf("%d", findLHS(arr,n));
}

