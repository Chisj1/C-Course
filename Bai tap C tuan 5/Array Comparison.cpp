#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j=0;
	int a[100],b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d", &b[i]);
	}
	for(i=0;i<n;i++){
	if(a[i]==b[i]){
		j++;
	}
	}
	if(j==n){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
