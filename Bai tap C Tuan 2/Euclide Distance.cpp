#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,y1,y2;
	scanf("%f %f %f %f", &x1,&x2,&y1,&y2);
	printf("%.2f",sqrt(pow((x2-y2),2)+ pow((x1-y1),2)));
}

