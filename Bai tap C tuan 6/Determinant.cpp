#include<stdio.h>

int main(){
	int a[3],b[3],c[3];
	int i;
	for(i=0;i<3;i++) scanf("%d", &a[i]);
	for(i=0;i<3;i++) scanf("%d", &b[i]);
	for(i=0;i<3;i++) scanf("%d", &c[i]);
	printf("%d", a[0]*b[1]*c[2]+a[1]*b[2]*c[0]+a[2]*b[0]*c[1]-a[0]*b[2]*c[1]-a[1]*b[0]*c[2]-a[2]*b[1]*c[0]);	
}
