 #include<stdio.h>
#include<math.h>
int main(){
	float n;
	scanf("%f", &n);
	if(n>=0){
		printf("%.1f %.1f %.1f %.1f %.1f",n, log2(n), n*n,n*n*n, 2*n);
	}
	else{
		printf("invalid");
	}
}

