#include <stdio.h>
#include<math.h>
int main()
{
	int i;
float a[3];
float rva;
for (i=0;i<3;i++){
	scanf("%f", &a[i]);
}
a[2] = a[2]/180*3.14;
rva=a[0] * a[1] *sin(9*a[2]);
if(rva < 0){
printf("invalid");
}
else{

		printf("%.1f", rva);
}

	
}
