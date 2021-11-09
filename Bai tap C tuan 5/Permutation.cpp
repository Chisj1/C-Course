#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k;
	int a[100];
	for(i=0;i<5;i++){
		scanf("%d", &a[i]);
	}
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			if(a[k]==i){
				printf("Q ");
			}
			else{
				printf("* ");
			}
		}
		printf("\n");
	}
	
}


