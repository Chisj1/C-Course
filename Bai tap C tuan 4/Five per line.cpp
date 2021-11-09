#include <stdio.h>
int main()
{
	int i,j,n;
	for(i=1000;i<=2000;i++){
		printf("%d ", i);
		if(i%5==4){
			printf("\n");
		}
	}
}
