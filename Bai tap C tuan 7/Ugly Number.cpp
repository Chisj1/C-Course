#include<stdio.h>
int isUgly(int n){
	scanf("%d", &n);
	if(n==1||n==0) return 1;
	else{
		while(n%2==0) 
		{
			n /= 2;
		}
		while(n%5==0) {
			n /= 5;
		}	
		while(n%3==0) {
			n /= 3;
		}
	}
	if(n==1) return 1;
	else return 0;
	
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", isUgly(n));
}
