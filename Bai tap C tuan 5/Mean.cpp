#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	double a[100], sum=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
		sum += a[i];
	}
	sum = sum/n;
	printf("%.2lf", sum);
}
