#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int i,j=0;
	scanf("%d", &n);
	for(i=1;i<n;i++){
		if(n%i==0){
			j += i;
		}
	}
	if(n==j){
		printf("true");
	}
	else{
		printf("false");
	}
	
}

