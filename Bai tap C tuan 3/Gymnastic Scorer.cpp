#include<stdio.h>
int main(){
	float a[100];
	float hv ;
	float sum;
	for(int i=0;i<=5;i++){
		scanf("%f", &a[i]);
	}
	for(int i=0;i<5;i++){
		for(int j=i+1;j<6;j++){
			if(a[i]<a[j]){
				hv=a[i];
				a[i]=a[j];
				a[j]=hv;
				
			}
		}
	}

for(int i=1;i<=4;i++){
	sum += a[i];
}
	printf("%.1f", sum/4);
}
