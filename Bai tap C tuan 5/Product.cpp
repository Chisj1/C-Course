#include<stdio.h>

int main(){
	int n,i;
	double tich=1,a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
		tich *= a[i];
	}
	printf("%.2lf", tich);
}
