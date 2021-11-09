#include <stdio.h>
int main()
{
	int n;
	int chuaNhiPhan[100];
	int i=0,j;
	scanf("%d",&n);
	if(n>0){
		while(n!=0)
	{
		chuaNhiPhan[i] = n%2;
		n = n/2;
		i++;
	}
	for(j=i-1;j>=0;j--){
		printf("%d", chuaNhiPhan[j]);
	}
	}
	else{
		printf("invalid");
	}
	
}
