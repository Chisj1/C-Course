#include <stdio.h>
#include<math.h>
int main()
{
	int a, b;
	int i,j,k,h;
	scanf("%d", &a);
	for(i=0;i<pow(a,1.0/3);i++){
		for(j=0;j<pow(a,1.0/3);j++){
			for(h=0;h<pow(a,1.0/3);h++){
				for(k=0;k<pow(a,1.0/3);k++){
					if(i*i*i+j*j*j == h*h*h+k*k*k 
					&& i*i*i+j*j*j<a 
					&& i<h && i<k && j>h && j>k && i<j &&h<k  ){
						printf("%d ", i*i*i+j*j*j);
					}
				}
			}
		}
	}	
}




