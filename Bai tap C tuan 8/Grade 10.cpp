#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LINE 256
#define WORD 20

void grade10(const char* path)
{
	FILE *f = fopen(path, "r");
	int i=0,n=0;
	char line[100][LINE];
	int stt,ds,th4,th1;
	char h[20],ten[10],ns[15];
	while(fgets(line[i++], LINE, f ))
		n++;
	for(int i=1;i<n;i++)
	{
		char *token;
		char cac[100][20];
	  	int j=0;
	 	token = strtok(line[i],",");
		while( token!= NULL ) 
		{	
			strcpy(cac[j++],token);
			token= strtok(NULL, ",");	
	 	}
		if(strcmp(cac[5],"10")==0)
			printf("%s %s\n",cac[1],cac[2]);
		j=0;
	}
}

int main()
{
	grade10("path.csv");
}
