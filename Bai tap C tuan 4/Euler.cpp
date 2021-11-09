#include<stdio.h>
#include<math.h>
int main(){
	long long int a,b,c,d,e;
	int n;
	scanf("%d", &n);
	for(a=n;a>=1;a--){
		for(b=1;b<=a;b++){
			for(c=1;c<=b;c++){
				for(d=1;d<=c;d++){
					for(e=1;e<=d;e++){
						if(
						e*e*e*e*e+b*b*b*b*b+c*c*c*c*c+d*d*d*d*d==a*a*a*a*a 
						)
						{
							printf("%lld^5 + %lld^5 + %lld^5 + %lld^5 = %lld^5 ",e,d,c,b, a );
							return 0;
						}
					}
				}
			}
		}
	}	
}
