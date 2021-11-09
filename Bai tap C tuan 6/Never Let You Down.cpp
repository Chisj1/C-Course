#include<stdio.h>

int main(){
	int n,i,j,a[100],hv1,b[100],hv2;
	scanf("%d", &n);
	for(i<0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=i+1;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
				if(a[j]<a[i]){
					hv1=a[i];
					a[i]=a[j];
					a[j]=hv1;
					hv2=b[i];
					b[i]=b[j];
					b[j]=hv2;
			}	
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
				if(a[j]==a[i]&&b[j]<b[i]){
					hv2=b[i];
					b[i]=b[j];
					b[j]=hv2;
			}	
		}
	}
	for(i=0;i<n;i++){
		if(b[i]%2==0){
			printf("%d ", b[i]);
		}
	}
	for(i=0;i<n;i++){
		if(b[i]%2!=0){
			printf("%d ", b[i]);
		}
	}
}
