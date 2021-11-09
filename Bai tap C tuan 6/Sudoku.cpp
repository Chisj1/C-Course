#include<stdio.h>

int main(){
	int i,j,n,hang,cot,k=0;
	int a[100][100] ;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &n);
	if(n<=0||n>=9){
		printf("Invalid number.");
	}
	else{
		scanf("%d %d", &hang,&cot);
		if(hang<=0 || cot <=0 || hang > 9 || cot > 9){
			printf("Invalid place.");
		}
		else if(a[hang][cot]==0){
			for(i=1;i<=9;i++){
				if(a[cot][i]==n || a[i][hang]==n){
					k++;
				}
				else{
					k=0;
				}
			}
			if(k==0){
				printf("Valid place.");
			}
			else{
				printf("Invalid place.");
			}
			
		}
		else{
			printf("Invalid place.");
		}
	}
}
