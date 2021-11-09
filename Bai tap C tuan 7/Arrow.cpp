#include<stdio.h>

void printArrow(int n, int left){
	int dem=0;
	if(left==0){
		for(int i=0;i<2*n-1;i++){
			for(int j=0;j<n;j++){
				if(i<=j||2*n-i-2<=j) printf("*");
				else printf("  ");
			}
			printf("\n");
		}
}
	else{
		for(int i=0;i<2*n-1;i++){
				for(int k=0;k<n;k++){
					if(i<k||2*n-i-2<k) printf(" ");
				}
				for(int j=0;j<n;j++){
					if(i<=j||2*n-i-2<=j) printf("*");
				}
				printf("\n");
	}
	}	
}

int main(){
	int n, left;
	scanf("%d%d", &n, &left);
	printArrow(n, left);
	
}
