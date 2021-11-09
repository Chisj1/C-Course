#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* chuan(char* str){
	const int len = strlen(str);
	str[len-1]='\0';
	return str;
}
int main(){
	int i,j=0,n,k=0;
	char a[100][100];
	scanf("%d", &n);
	for(i=0;i<=n;i++){
		 fgets(a[i], 100, stdin);
	}
	for(i=0;i<=n;i++){
		if(strcmp(a[i],"Porthos\n")==0 ||strcmp(a[i],"Athos\n")==0||strcmp(a[i],"Aramis\n")==0){
			j=i;
			k++;
		}
	}
	if(k==3){
		for(i=1;i<=n;i++){
			printf("%s", chuan(a[i]));
			if(i<n) printf(", "); 
			if(i==j) printf("d'Artagnan, ");
		
	}
	}
	else{
		for(i=1;i<=n;i++){
			printf("%s", chuan(a[i]));
			if(i<n) printf(", "); 
	}
	}
}



