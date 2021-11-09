#include<stdio.h>
#include<math.h>
int main(){
int a,b,n;
scanf("%d%d", &a,&b);
n=a+30*b;

if(111<=n&&n<=201){
	printf("Spring");
	
}
else{
	if(202<=n&&n<=292){
		printf("Summer");
	}
	else{
		if(293<=n&&n<=381){
			printf("Autumn");
			
		}
		else{
			printf("Winter");
		}
	}
}
	
}
