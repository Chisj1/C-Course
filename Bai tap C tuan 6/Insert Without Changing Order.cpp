#include<stdio.h>
int main(){
	int i,j=0,n;
	double a[100], chen;
	scanf("%d", &n);
	for(i=0;i<n;i++){
	scanf("%lf", &a[i]);
	}
	scanf("%lf", &chen);
	i=0;
	while(chen>=a[i]){
		printf("%.2lf ", a[i]);
		i++;
	}
	printf("%.2lf ", chen);
		for(i=0;i<n;i++){
			 if(a[i]>chen){
			 	printf("%.2lf ", a[i]);
			 }
	}
	
}
