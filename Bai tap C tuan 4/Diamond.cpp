#include <stdio.h>
#include <math.h>
int main(){
	int n,m;
	int i,j,k,f;
	scanf("%d", &n);
	//In phan tren
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf(". ");
		}
		if(i==0){
			printf("* ");
		}
		else{
			for(k=0;k<3;k++){
			printf("* ");
			if(k<2){
				for(f=0;f<2*i-2;f++){
					printf(" ");
				}
			}
			}
		}
		for(j=0;j<n-i;j++){
			printf(". ");
		}
		printf("\n");
	}
	//In dong giua
	for(i=0;i<2*n+1;i++){
		printf("* ");
	}
	printf("\n");
	//In phan duoi
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf(". ");
		}
		if(i==n-1){
			printf("* ");
		}
		else{
			for(k=0;k<3;k++){
				printf("* ");
			if(k<2){
				for(f=0;f<2*(n-i)-4;f++){
				printf(" ");
				}
			}
			}
		}
		for(j=0;j<=i;j++){
			printf(". ");
		}
		printf("\n");
	}
}
