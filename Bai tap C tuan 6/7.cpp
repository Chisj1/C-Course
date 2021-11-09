#include<stdio.h>

int main(){
	int i,j=0,n;
	int a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
	scanf("%d", &a[i]);
	}
	for(i=n-1;i>=0;i--){
	if(a[i]==7){
		printf("%d ", i);
	}
	else{
		j++;
	}
	}
	if(j==n){
		printf("Not found");
	}
}
