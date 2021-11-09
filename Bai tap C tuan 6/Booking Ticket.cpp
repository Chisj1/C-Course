#include<stdio.h>

int main(){
	int i,j,n,k,m,hang,cot;
	int a[100][100];
	scanf("%d %d", &n, &m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &hang,&cot);
	if(a[hang][cot]==0){
		printf("Your seat is booked. Please complete the payment.");
	}
	else{
		printf("Seat %d%d is sold.",hang,cot);
	}
	
}
