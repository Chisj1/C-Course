#include<stdio.h>
#include<math.h>
int main(){
	float w,t,v;
	scanf("%f %f", &t, &v);
	if(v<120&&v>3&& -50<t<50){
	w= 35.74+0.6215*t+(0.4275*t-35.75)* pow(v,0.16);
	printf("%.2f", w);
}
else{
	return 0;
}
	
}
