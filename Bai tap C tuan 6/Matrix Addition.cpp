#include<stdio.h>

int main(){
	int i,j,n,m,l;
	double a[100][100],b[100][100], sum=0;
	scanf("%d %d", &n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%lf", &a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%lf", &b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%.2lf ", a[i][j]+b[i][j]);
		}
		printf("%\n");
	}
}
