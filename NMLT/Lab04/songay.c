#include<stdio.h>

int main(){
	int thg,nam,thg_2=28;
	printf("Thang : ");
	scanf("%d", &thg);
	printf("Nam : ");
	scanf("%d", &nam);
	//kiem tra xem co la nam nhuan khong,neu la nam nhuan thi thang 2 se co 29 ngay
	if(nam%4==0){
		if(nam%100!=0){
			thg_2=29;
		}
		else{
			if(nam%400==0){
				thg_2=29;
			}
			else{
				thg_2=28;
			}
		}
	}
	else{
		thg_2=28;
	}
	switch(thg){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Thang %d nam %d co 31 ngay", thg, nam);
			break;
		case 2:
			printf("Thang 2 nam %d co %d ngay", nam, thg_2);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Thang %d nam %d co 30 ngay", thg,nam);
			break;
		default:
			printf("Vui long nhap Thang hop le!");
			break;
	}
	return 0;
}

