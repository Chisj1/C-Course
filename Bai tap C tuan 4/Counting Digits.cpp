#include<stdio.h>
#include<math.h>
int main (){
	int n;
	int i;
	scanf("%d", &n);
	if(n<0){
		n = -1*n;
	}
	if(n==0){
		printf("1");
	}
	else{
		while(n>0.9){
		n /= 10;
		i++;
	}
	printf("%d", i);
	}
	
}
