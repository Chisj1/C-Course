#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	double a[100],b[100],sum=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%lf", &b[i]);
	}
	for(i=0;i<n;i++){
		sum += a[i]*b[i];
	}
	printf("%.2lf", sum);
}
