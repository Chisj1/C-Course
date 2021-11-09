#include<stdio.h>

int main(){
	int i,j,n,k;
	int den=0, di=0;
	double a[100],hv;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[j]>a[i]){
				hv = a[i];
				a[i] = a[j];
				a[j] = hv;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%.2lf ", a[i]);
	}
}
