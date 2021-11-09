#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
	if(a>b) return a;
	return b;
}
int getMoney (int * houses, char * path)
{
	int i=0;
	FILE *f = fopen(path,"r");
	while(!feof(f))
	{	
		fscanf(f, "%d", &houses[i]);
		i++;
	}	
	
	return i;

}

int rob(int * houses, int numOfHouses)
{	
	int maxg[numOfHouses];
	maxg[0] = houses[0];
	maxg[1] = max(houses[0], houses[1]);
	
	for(int i=2 ;i<numOfHouses;i++)
	{
		int preMax=maxg[i-1];
		int back2Max = maxg[i-2];
		maxg[i] = max(preMax, houses[i]+back2Max);
	}
	return maxg[numOfHouses-1];
}

int main()
{
	
}

