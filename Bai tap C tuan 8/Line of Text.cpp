#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[100];
	int count=1;
	scanf("%s", a);
	FILE *p = fopen(a,"r");
	if(p!=NULL)
	{	
		while(1)
		{	char ch= fgetc(p);
			if(ch==EOF)
				break;
			if(ch=='\n')
				count++;
		}
		printf("%d", count);
		
	}
	else
	{
		printf("Mission failed");
	 	exit(0);	
	}
	fclose(p);
	 return 0;

}
