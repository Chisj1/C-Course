#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	int a[100],b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d", &b[i]);
	}
	for(i=0;i<n;i++){
	printf("%d ", a[i]);
	printf("%d ", b[i]);
	}
	
}

