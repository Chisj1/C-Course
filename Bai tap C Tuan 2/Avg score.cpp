#include<stdio.h>

int main(){
double a,b,c,d,e,f ,avg;
scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
avg = (a+b+c+d*2+e*2+f*3)/10;
printf("%.2lf", avg);
}
