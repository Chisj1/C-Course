#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j=0;
	double a[100];
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%lf", &a[i]);
	}
	if(n%2==1){
		printf("%.2f", a[(n-1)/2+1]);
	}
	else{
		printf("%.2f", (a[n/2]+a[n/2+1])/2);
	}
}
