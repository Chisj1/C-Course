#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%60==0){
		printf("%d", a/60);
	}
	else{
		printf("%d" ,a/60+1);
	}
}
