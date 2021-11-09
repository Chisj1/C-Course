#include <stdio.h>
int main()
{
	int i,j,k;
	int n;
	scanf("%d", &n);
	for(i=0;i<2*n+1;i++){
		for(j=0;j<2*n+1;j++){
			if(j==i||j==2*n-i){
			printf("* ");
			}
			else{
				printf(". ");
			}
	}
	printf("\n");	
	}
	}

