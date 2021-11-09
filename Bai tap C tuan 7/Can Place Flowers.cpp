#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool canPlaceFlowers (int flowerbed[], int n, int k){
	int m=0;
	for(int j =0;j<n;j++){
		for(int i=0;i<n;i++){
		if(flowerbed[i]==0&&flowerbed[i-1]!=1&&flowerbed[i+1]!=1){
			m++;
			flowerbed[i]=1;
			break;
			}
		}
	}
	
	if(k<=m) return true;
	else return false ;
	
}

int main(){
	
}
