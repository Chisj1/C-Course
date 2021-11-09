#include<stdio.h>
#include<math.h>

int main(){
 int a,b,c;
 int i,j;
 scanf("%d%d", &a,&b);
 if(a<0) a = -a;
 if(b<0) b = -b;
 i=a;
 j=b;
  	while( i!=j ){
  		if(i>j){
  			i = i-j;
		  }
		else {
			j= j-i;
		}
		
	  }
  printf("%d", i);
}
