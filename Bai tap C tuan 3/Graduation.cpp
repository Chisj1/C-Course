#include<stdio.h>
 
 int main(){
 	float a;
 	scanf("%f", &a);
 	if(a>=3.59){printf("Xuat sac");}
 	if(3.2<=a & a<3.59){printf("Gioi");}
 	if(2.5<=a & a<3.2){printf("Kha");}
 	if(2<=a&a<2.5){printf("Trung binh");}
 	if(a<2){printf("Khong ra duoc truong");}	
 }
