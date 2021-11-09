#include<stdio.h>
#include<stdlib.h>
int findRadius(int houses[], int nHouses, int heaters[], int nHeaters){
	
	int k=0,kt=0,i=0;
	int n = houses[nHouses-1];
	int m = heaters[nHeaters-1];
	if(m>n) n=m;
	int *shouses  = (int*) calloc(n+1,(n+1)*sizeof(int));
 	int *sheaters = (int*) calloc(n+1,(n+1)*sizeof(int));
	for(i=0;i<nHouses;i++) shouses[houses[i]]=houses[i];
	for(i=0;i<nHeaters;i++) sheaters[heaters[i]]=heaters[i];
	//o tren oke roi
	
	for(i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			if(sheaters[j]!=0&&sheaters[j]<n+1){
				if(sheaters[j+k]==0) sheaters[j+k] += n+1;
				if(sheaters[j-k]==0) sheaters[j-k] += n+1;
			}
		}
		for(int j=0;j<=n;j++){
			if(shouses[j]==0) continue;
			if(shouses[j] & sheaters[j] == 0){
				k++;
				break;
			}
			if(j==n-1) kt=1;
		}
		if(kt==1) break;
	}
	free(shouses);
	free(sheaters);
	return k;
	
}

int main(){
	int nHouses, nHeaters, houses[100],heaters[100];
	scanf("%d%d" ,&nHouses,&nHeaters);	
	for(int i=0;i<nHouses;i++) scanf("%d", &houses[i]);
	for(int i=0;i<nHeaters;i++) scanf("%d", &heaters[i]);
	printf("%d ", findRadius(houses,nHouses,heaters,nHeaters));
	return 0;
}

