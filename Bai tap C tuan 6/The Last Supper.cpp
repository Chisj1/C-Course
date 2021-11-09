#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int i,j=0,n;
	char a[100][100];
	scanf("%d", &n);
	for(i=0;i<=n;i++){
		 fgets(a[i], sizeof(a[i]), stdin);
	}
	for(i=1;i<=n;i++){
		if(strcmp(a[i],"Judas Iscariot\n")==0){
			continue;
		}
		printf("%s", a[i]);	
	}
}
