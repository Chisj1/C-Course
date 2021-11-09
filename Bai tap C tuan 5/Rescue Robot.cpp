#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,t=0;
	double a[3][100],hv0,hv1;
	scanf("%d", &n);
	if(n<0){
		printf("invalid");
	}
	else{
		for(i=0;i<n;i++){
		scanf("%lf", &a[0][i]);
		}
		for(i=0;i<n;i++){
			a[1][i]=i;
		}
		for(i=0;i<n;i++){
			a[2][i]=0;
		}
		for(i=0;i<n;i++){
			if(a[0][i]<0||a[0][i]>1){
				t++;
			}
		}
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[0][j]>a[0][i]){
					hv0=a[0][i];
					a[0][i]=a[0][j];
					a[0][j]=hv0;
					
					hv1=a[1][i];
					a[1][i]=a[1][j];
					a[1][j]=hv1;
				}
			}
		}
		if(a[0][0]<0.05){
			printf("No one is alive.");
		}
		else{
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
					if(a[0][i]>0.05){
					a[2][i] +=1;
					a[0][j] *= 0.5;
					}
				}
			}	
		}
		if(t!=0){
			printf("invalid");
		}
		else{
			for(i=0;i<n;i++){
			if(a[2][i]!=0){
				printf("%.0lf ", a[1][i]);
			}
		}
		}
	}
	
	
}
