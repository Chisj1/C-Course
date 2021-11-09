#include<stdio.h>
#include<math.h>
int giaiThua(int a){
	if(a==1||a==0){
		return 1;
	}
	else return a*giaiThua(a-1);
}
int main(){
	int a;
	scanf("%d", &a);
	printf("%d", giaiThua(a));
}
