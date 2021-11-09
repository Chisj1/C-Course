#include<stdio.h>

int main(){
	int i,j,n,m,l;
	double a[10][100], sum=0;
	scanf("%d %d", &n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%lf", &a[i][j]);
		}
	}
	scanf("%d", &l);
	for(i=0;i<m;i++){
		sum += a[l-1][i];
	}
	printf("%.2lf", sum);

}
