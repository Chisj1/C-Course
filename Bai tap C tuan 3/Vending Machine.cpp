#include<stdio.h>
#include<math.h>
int main(){
	int a,b; //Bien ho tro
	char dr[20];
	int m; //Tien
	char n; //Do uong
	
	scanf("%d %c", &m, &n);
	switch (n){
	case 'C' :
		a = 12000;
		break;
	case 'P' :
		a= 12000;
		break;
	case '7' :
		a= 11000;
		break;
	case 'S' :
		a =	10000;
		break;
	case 'F' :
		a = 7000;
		break;
	case 'L' :
		a= 5000;
		break;
	default :
		printf("%d", m);
	}
	
	if(m>=a){
			switch (n){
	case 'C' :
		printf("Cocacola %d", m-a);
		break;
	case 'P' :
		printf("Pepsi %d", m-a);
		break;
	case '7' :
		printf("7up %d", m-a);
		break;
	case 'S' :
		printf("Sprite %d", m-a);
		break;
	case 'L' :
		printf("Lavie %d", m-a);
		break;
	case 'F' :
		printf("Fanta %d", m-a);
		break;
	}
	}
	else{
		switch (n){
	case 'C' :
		printf("Con thieu %d de mua Cocacola", a-m);
		break;
	case 'P' :
		printf("Con thieu %d de mua Pepsi", a-m);
		break;
	case '7' :
		printf("Con thieu %d de mua 7up", a-m);
		break;
	case 'S' :
		printf("Con thieu %d de mua Sprite", a-m);
		break;
	case 'L' :
		printf("Con thieu %d de mua Lavie", a-m);
		break;
	case 'F' :
		printf("Con thieu %d de mua Fanta", a-m);
		break;
	}
		
	}
	
		
	
	
}
