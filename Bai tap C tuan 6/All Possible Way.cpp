#include<stdio.h>

int main(){
	int i,j,n,k;
	int den=0, di=0;
	int a[100][100] ;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &k);
	for(i=0;i<n;i++){
		if(a[k-1][i]==1){
			den+=1;
		}
	}
	for(i=0;i<n;i++){
		if(a[i][k-1]==1){
			di+=1;
		}
	}
	printf("%d %d", den,di);

}
