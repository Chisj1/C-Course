#include<stdio.h>
#include<math.h>
int main(){
	int i,a,n[100];
	int kt=0;
	scanf("%d", &a);
	for(i=0;i<a;i++){
		scanf("%d", &n[i]);
	}
	for(i=0;i<a;i++){
		if(n[i]==42) kt++;
	}
	if(kt!=0){
		printf("I've found the meaning of life!");
	}
	else{
		printf("It's a joke!");
	}
}
