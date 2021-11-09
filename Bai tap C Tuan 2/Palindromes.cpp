#include<stdio.h>
int main(){
int a[5];
scanf("%d", &a[0] );
a[1]= a[0]/10000;
a[2] = (a[0] % 10000)/1000;
a[4] = (a[0] % 100) /10;
a[5] = a[0] % 10;
if(a[1]==a[5]&a[2]==a[4]){
	printf("%d is a palindrome!", a[0]);
}
else{
	printf("%d is not a palindrome!", a[0]);
}
}



