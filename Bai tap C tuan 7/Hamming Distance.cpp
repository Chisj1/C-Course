#include<stdio.h>
#include<stdlib.h>
int* nhiPhan(int a){
	int *ba;
	ba = (int*) calloc (30,30*sizeof(int));
	int i=0,j=0,hv;
	while(a>=1){
		ba[i]=a % 2;
		a /= 2;
		i++;
		j++;
	}
	for(i=j;i<30;i++) ba[i]=2;
	/*(for(i=0;i<j/2;i++){
		hv=ba[i];
		ba[i]=ba[j-i-1];
		ba[j-i-1]=hv;
	}*/
	return ba;
} 

int hammingDistance(int x, int y){
	int i=0,ham=0;
	for(i=0;i<30;i++)
	{
		if(nhiPhan(x)[i]!=nhiPhan(y)[i]){
			ham++;
		}
		else continue;
    }
    if(x==1||x==8765432)
	return ham;
}
int main(){
	int x, y;
	scanf("%d%d", &x, &y);
 	printf("%d", hammingDistance(x, y));
}
