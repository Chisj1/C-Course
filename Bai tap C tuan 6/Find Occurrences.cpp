#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int dem(char *s,char *s1){
	int i;
	int j=0;
	for(i=0;s[i]!='\0';i++){
		if(strstr(&s[i],s1)==&s[i]){
			j++;
		}
	}
	return j;
}
int main(){s
	char a[500],b[10];
	int i,j;
	fgets(a,499,stdin);
	fgets(b,9,stdin);
	b[strlen(b)-1]='\0';
	printf("%d",dem(a,b));	
}
