 #include<stdio.h>
#include<math.h>
int main(){
	float a;
	scanf("%f", &a);
	if(a<74){
		printf("0");
	}
	if(74<=a&a<=95){
		printf("1");
	}
	if(96<=a&a<=110){
		printf("2");
	}
	if(111<=a&a<=130){
		printf("3");
	}
	if(130<=a&a<=155){
		printf("4");
	}
	if(a>=155){
		printf("5");
	}
	
}
