#include<stdio.h>
#include<string.h>
int main(){
	char a[300];
	int i,j=0;
	scanf("%s", a);
	for (i=0;i<strlen(a);i++){
		if(a[i]=='A') a[i]='T';
		else if(a[i]=='T') a[i]='A';
		else if(a[i]=='G') a[i]='X';
		else if(a[i]=='X') a[i]='G';
		printf("%c", a[i]);
	}	
}
