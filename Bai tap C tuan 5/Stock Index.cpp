#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j;
	double a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
	}
	for(i=0;i<n-1;i++){
		printf("%.2lf ", fabs(a[i+1]-a[i]));
	}
}
