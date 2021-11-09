#include<stdio.h>


void moveZeroes (int *arr, char *file)
{
	int n;
	int i =0;
	FILE *f = fopen(file, "r");
	while(!feof(f))
	{
		 fscanf(f, "%d", &arr[i]);
		 i++;
	}	
	n = arr[0];
	int countZ= 0;
	for(i=1;i<=n;i++)
		if(arr[i]) 
			printf("%d ", arr[i]);
		else	
			countZ++;
	for(i=0;i<countZ;i++)
		printf("0 ");		
			
}


int main(){
	

}
