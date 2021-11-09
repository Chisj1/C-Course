#include <stdio.h>
int main()
{
int a[100];
int i,j;
int n=0;
	for(i=0;i<3;i++){
		scanf("%d",&a[i]); 
	}
	
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			if(a[i]!=a[j]) n += 1 ;
		}
	}
	if(a[1]==a[2]&&a[2]==a[0]&&a[0]==a[1]) n=1;
	printf("%d", n);
	
}
