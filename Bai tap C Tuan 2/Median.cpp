 #include<stdio.h>
#include<math.h>
int main(){
	int i,j,hv;
	int a[5];
	for(i=0;i<=4;i++){
		scanf("%d", &a[i]);
	}	
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[j]>a[i]){
				hv=a[i];
				a[i]=a[j];
				a[j]=hv;
			}
		}
	}
printf("%d", a[2]);
	
}
