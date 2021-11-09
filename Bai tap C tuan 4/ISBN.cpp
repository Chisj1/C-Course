#include <stdio.h>
int main()
{
	char a[9], b[9];
	int i,j=0;
	int m,n;
	scanf("%s", a);
	for(i=0;i<9;i++){
		b[i] = a[i]-48;
	}
	m = 10*b[0]+9*b[1]+8*b[2]+7*b[3]+6*b[4]+5*b[5]+4*b[6]+3*b[7]+2*b[8];
	while((m % 11) !=0){
		m++;
		j++;
	}
	if(j!=10){
		printf("%d-%d%d%d-%d%d%d%d%d-%d", b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8],j);
	}
	else
	{
		printf("%d-%d%d%d-%d%d%d%d%d-X", b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8]);
	}
	
	}
	


