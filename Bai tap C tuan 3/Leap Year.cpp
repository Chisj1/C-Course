#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	if(a%4==0){
		if(a%100!=0){
			printf("%d is a leap year!",a);
		}
		else{
			if(a%400==0){
				printf("%d is a leap year!",a);
			}
			else{
				printf("%d is a common year!", a);
			}
		}
	}
	else{
		printf("%d is a common year!", a);
	}
	
	
	
}
