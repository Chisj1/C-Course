#include<stdio.h>
#include<math.h>
bool isMersenne(int p){
	long long int n = (long long int)pow(2.0,p)-1;
	int c = 0;
	for(int i =2 ; i< sqrt(n);i++){
		if(n%i==0){
			c=1;
			break;
		}
	}
	if(c==1) return false;
	else return true;
	
}


int main(){
	int p;
	scanf("%d", &p);
	if(isMersenne(p)) printf("true");
	else printf("false");
}
