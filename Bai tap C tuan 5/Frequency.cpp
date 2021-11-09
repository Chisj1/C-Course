#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j=0;
	int a[2][100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[0][i]);
	}
	for(i=0;i<n;i++){
		a[1][i]=0;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[0][i]==a[0][j]){
				a[1][i] +=1;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[0][i]==a[0][j]){
				a[1][j]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[1][i]!=0){
			printf("%d %d\n", a[0][i], a[1][i]);
		}	
	}
}


