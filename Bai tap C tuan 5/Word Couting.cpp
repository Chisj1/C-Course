#include<stdio.h>
#include<string.h>
int main(){
	int i,j=0,k;
	char a[1000];
	fgets(a, sizeof(a), stdin);
	for(i=0;i<strlen(a);i++){
		if(a[i]==' ' && a[i+1]!=' '){
			j++;
		}
	}
	if(j==0){
		printf("1 word");
	}
	else{
		printf("%d words", j+1);
	}
	
}


