#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j;
	double a[100],avg=0,var=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
		avg += a[i]/n;
	}
	for(i=0;i<n;i++){
		var += (a[i]-avg)*(a[i]-avg)/n;
	}
	var = sqrt(var);
	for(i=0;i<n;i++){
		printf("%.2f ", (a[i]-avg)/var);
	}
	
	
	
	
}
