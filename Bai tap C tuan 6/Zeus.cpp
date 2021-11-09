#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char str1[100], str2[]="Zues";
	scanf("%[^\n]s", str1);
	char *pt = strstr(str1, "Zues");
	if(pt!=NULL){
		pt[1]='e';
		pt[2]='u';
		pt[3]='s';
		printf("%s", str1);
	}
	else{
		printf("%s", str1);
	}
}
