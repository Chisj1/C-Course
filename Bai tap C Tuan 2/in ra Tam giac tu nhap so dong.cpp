#include<stdio.h>
int main(){
	int soDong ;
	printf("Nhap so dong cho tam giac di ong ");
	scanf("%d", &soDong);
	printf("\n");
	for(int i=1; i<=soDong;i++){
		//in khona trong
		for(int j=i; j<soDong; j++){
			printf(" ");
		}
		//in dau *
		for(int j=1; j<=(i*2-1);j++ ){
			printf("*");
		}
		//Xuong dong
		printf("\n");
	}
	


}
