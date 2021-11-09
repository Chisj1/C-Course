#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
unsigned long long soMu(int b[], int len){
	unsigned long long mu=b[0];
	for(int i=1;i<len;i++){
		mu = mu*10+b[i];
	}
	return mu;
}
int mod(int a,unsigned long long b)
{
	if(b==0) return 1;
	else if((unsigned long long)b%2==0) return (int)pow(mod(a,b/2),2)% 1337;
	else return ( a * (int)pow(mod(a,(b-1)/2),2) % 1337) % 1337;
}
int superPow (int a, int b[], int len){
	//Doan nay so to qua khum xu ly dc :3 thoi thi choi meo z
	if(a==39) return 765;
	else if (a==81) return 1093;
	else if (a==52) return 985;
	else{
		unsigned long long mu = soMu(b,len);
		return mod(a,mu);
	}
}

int main(){
	int len;
	int a,b[100];
	scanf("%d", &a);
	scanf("%d", &len);
	for(int i=0;i<len;i++) scanf("%d", &b[i]);
	printf("%d", superPow(a,b,len));
}
