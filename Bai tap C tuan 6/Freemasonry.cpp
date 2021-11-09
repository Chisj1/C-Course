#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char str1[300];
	scanf("%[^\n]s", str1);
	char *pt = strstr(str1, "mason");
	if(pt!=NULL){
		printf("Freemasonry.");
	}
	else{
		printf("Normal string.");
	}
	return 0;
}
