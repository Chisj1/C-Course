#include<stdio.h>
#include<stdlib.h>

void showClue (char* path) 
{
	FILE *f = fopen(path,"r");
	while(1)
	{	
		char ch= fgetc(f);
		if(ch==EOF) break;
		printf("%c", ch );	
	}	
}

int main(){
	char a[100];
	scanf("%s", a);
	showClue(a);
}
