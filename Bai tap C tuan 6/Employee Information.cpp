#include<stdio.h>

int main(){
	int i,j,n,k=0;
	int a[100][100] ;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<n;i++){
			if(a[i][0]==0 && a[i][1] > 30 && a[i][2] ==1 ){
				k++;
		}
	}
	printf("%d", k);
	
}
