#include<stdio.h>
#include<math.h>
int main(){
	float a,b,bmi;
	scanf("%f%f", &a,&b);
	bmi= a/(b*b);
	if(bmi <18.5){
		printf("Thieu can");
	}
	else{
		if(bmi<25){
			printf("Binh thuong");
			
		}
		else{
			if(bmi<30){
				printf("Thua can");
			}
			else{
				printf("Beo phi");
			}
		}
	}
	
	
	
	
	
}
