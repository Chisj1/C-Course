#include<stdio.h>
#include<string.h>
int main (){
	char a[500];
	int i,j,b[500],len;
	scanf("%[^\n]", a);
	len = strlen(a);
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(a[i]==a[j]){
				b[j]=1;
			}
		}
	}
	for(i=0;i<len;i++){
		if(b[i]==1){
			continue;
		}
		printf("%c",a[i]);
	}
}
