#include<stdio.h>

int main (){
	float a,b;
	int x,y;
	scanf("%f %f", &a,&b);
	y = (b-2*a)/2;
	x = a-y;
	if(y==(b-2*a)/2){
		printf("chicken = %d, dog = %d", x,y);
	}
	else{
		printf("invalid");
	}
	 
}
