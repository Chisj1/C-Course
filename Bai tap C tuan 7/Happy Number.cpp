#include<stdio.h>

int isHappyNumber(int n){
	int sum=0,j=0;
	for(int i=0;i<1000;i++){
		while(n>=1){
			sum += (n%10)*(n%10);
			n /= 10;
		}
		n = sum;
		sum=0;
		if(n==1){
			return 1;
		}
		if(i==999) return 0;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", isHappyNumber(n));
}
