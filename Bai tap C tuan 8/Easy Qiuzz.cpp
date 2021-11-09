#include<stdio.h>
int main(){
	char a[100];
	scanf("%[^\n]s", a);
	 FILE *p = fopen(a,"w");
	 if(p!=NULL){
	 	printf("NO");
	 	fclose(p);
	 }
	 else printf("YES");
	 return 0;

}
