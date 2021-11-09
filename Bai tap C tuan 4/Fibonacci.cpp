#include<stdio.h>
#include<math.h>

int fibo(int i){
if(i==1||i==2) return 1;
else return fibo(i-1)+fibo(i-2);
	 
}
int main(){
 int i,a;
 scanf("%d", &a);
 printf("0 ");
 for(i=1;i<a;i++){
 	printf("%d ", fibo(i));
 }
}
