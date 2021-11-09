#include<stdio.h>
#include<stdlib.h>

void rotate(int arr[], int n, int k){
	int* parr = (int*) malloc(n*sizeof(int));
	int j=0;
	for(int i=0;i<n;i++){
		if(j+k>=n) j = j-n;
		parr[j+k]=arr[i];
		j++;
	}
	for(int i=0;i<n;i++){
		arr[i]=parr[i];
	}
	free(parr);
}

int main(){
	
}
