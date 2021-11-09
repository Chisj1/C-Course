#include<stdio.h>

int main(){
	char a;
	scanf("%c", &a);
	if(97<=a && a<=122) {
	a = a-32;
	}

	printf("%c", a);
}
