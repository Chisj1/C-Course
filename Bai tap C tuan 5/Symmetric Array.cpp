#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j=0;
	int a[100];
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for(i=1;i<=n;i++){
		if(a[i]==a[n+1-i]){
			j++;
		}
	}
if(j==n){
		printf("Symmetric array.");
	}
	else{
		printf("Asymmetric array.");
	}
}
