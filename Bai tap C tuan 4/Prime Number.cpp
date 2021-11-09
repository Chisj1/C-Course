#include <stdio.h>
#include<math.h>
int main()
{
	int a;
	int i,j=0;
	scanf("%d", &a);
	if(a>0){
	if(a==2){
		printf("2 is a prime number");
	}
	else{
		if(a==1){
			j=1;
		}
		else{
			for(i=2;i<a;i++){
			if(a%i==0){
				j++;
			}
		}
		}
		if(j>0){
		printf("%d is not a prime number", a);
	}
	else{
		printf("%d is a prime number", a);
	}
	}	
}
else{
	printf("%d is not a prime number", a);
}
}
