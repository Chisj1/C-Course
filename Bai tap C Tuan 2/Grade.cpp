#include<stdio.h>
int main(){
	int i,d,m,y,x,y0,m0,d0;
scanf("%d %d %d",&d, &m, &y);
y0 = y-(14-m)/12 ;
x =y0+y0/4-y0/100+y0/400;
m0 = m+12*((14-m)/12)-2;
d0 =(d+x+31*m0/12) % 7 ;

	char a[7][20]={{'S','u','n','d','a','y'},{'M','o','n','d','a','y'},
	{'T','u','e','s','d','a','y'},
{'W','e','d','n','e','s','d','a','y'},
{'T','h','u','r','s','d','a','y'},{'F','r','i','d','a','y'},
};
	for(int i= 0; i<7;i++){
		if(i==d0){
		printf("%s ", a[i] );
	}
	}
}
