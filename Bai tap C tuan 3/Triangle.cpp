#include<stdio.h>
int main(){
	int a[100];
	int hv ;
	for(int i=0;i<=2;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<2;i++){
		for(int j=i+1;j<3;j++){
			if(a[i]<a[j]){
				hv=a[i];
				a[i]=a[j];
				a[j]=hv;
				
			}
		}
	}
		if(a[0]>0&&a[1]>0&&a[2]>0){
			if(a[1]+a[2]>a[0]){
				printf("true");
			}
			else{
				printf("false");
			}
		}
		else{
			printf("false");
		}
		
		
	}
