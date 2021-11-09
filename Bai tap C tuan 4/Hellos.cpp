#include<stdio.h>
int main(){
	int i,n;
	scanf("%d", &n);
	if(n>0&&n<100){
		for(i=0;i<n;i++){
			printf("Hello, world\n");
		}
	}
		else{
		printf("invalid");
	}
}
