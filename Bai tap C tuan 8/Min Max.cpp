#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[100];
	int count=1;
	scanf("%s", a);
	FILE *f = fopen(a,"r");
	if(f!=NULL)
	{		int Max=0,Min=1000;
			int i;
		while(!feof(f))
		{	
			fscanf(f, "%d", &i);
			Max = (Max < i ) ? i : Max;
			Min = (Min > i ) ? i : Min;	
	 	}
	 	printf("%d %d", Max, Min);
	}
	else
	{
		printf("Mission failed");
	 	exit(0);	
	}
	
	fclose(f);
	return 0;

}
