#include<stdio.h>

int main (){
	int n,m,i,s=0;
	scanf("%d%d", &m,&n);
	for(i=1;i<m;i++){
		if(m%i==0){
			s+=i;
		}
	}
	if(s==n){
		printf("true");
	}
	else{
		printf("false");
	}
}
