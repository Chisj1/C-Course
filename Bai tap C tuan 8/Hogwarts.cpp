#include<stdio.h>

void housesOfHogwarts(const char* path)
{
	FILE *f = fopen(path,"r");
	int n;
	fscanf(f,"%d\n", &n);
		while(1)
		{	
			char ch= fgetc(f);
			if(ch==EOF) break;
			printf("%c", ch );	
		}	
}	

int main()
{
	housesOfHogwarts("path.txt");
}
