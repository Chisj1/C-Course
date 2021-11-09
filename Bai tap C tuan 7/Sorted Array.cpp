#include<stdio.h>

void swap(float *a, float *b){
	float hv;
	hv=*a;
	*a=*b;
	*b=hv;
	
}
void sortIn(float arr[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(arr[j]<=arr[i]) swap(&arr[j],&arr[i]);
		}
	}
}
void sortDe(float arr[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(arr[j]>=arr[i]) swap(&arr[j],&arr[i]);
		}
	}
}

void sort(float array[], int size, bool isAscending){
	if(isAscending) sortIn(array,size);
	else sortDe(array,size);
}

int main(){
	
}
