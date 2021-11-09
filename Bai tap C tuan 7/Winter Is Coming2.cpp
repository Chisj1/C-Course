#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int max(int a,int b){
	if(a>b) return a;
	else return b;	
}
void swap(int *a, int *b){
	int hv;
	hv=*a;
	*a=*b;
	*b=hv;
	
}
void sortIn(int arr[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(arr[j]<=arr[i]) swap(&arr[j],&arr[i]);
		}
	}
}
int findRadius(int houses[], int nHouses, int heaters[], int nHeaters){
	sortIn(houses,nHouses);
	sortIn(heaters,nHeaters);
	int res=0,j=0;
	for(int i=0;i<nHouses;i++){
		while(j+1<nHeaters&&abs(heaters[j]-houses[i])>=abs(heaters[j+1]-houses[i]))
			j++;
		res = max(res,abs(heaters[j]-houses[i]));
	}
	return res;
	
}


int main(){
	
}

