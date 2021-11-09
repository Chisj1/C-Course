#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j=0;
	double a[100], sum=0, var=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
		sum += a[i];
	}
	for(i=0;i<n;i++){
		var += ((a[i]-sum/n)* (a[i]-sum/n))/n;
	}
	printf("%.2lf",var);
	
}
