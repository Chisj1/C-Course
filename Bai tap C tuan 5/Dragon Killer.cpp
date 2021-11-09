#include<stdio.h>
#include<math.h>
int main(){
	int n,dau=3,duoi=3,i,j=0;
	int a[10];
	for(i=0;i<9;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<9;i++){
		switch (a[i]){
		case 1 : //chat 1 dau,moc ra 1 dau
			dau +=0;
			break;
		case 2 : //chat 1 duoi, moc ra 2 duoi
			duoi +=1;
			break;
		case 3 : //chat 2 dau, khong moc j
			dau -=2;
			break;
		case 4 : //chat 2 duoi, moc ra 1 dau
			dau +=1;
			duoi -=2;
			break;
		default :
			j++;
		}
	}
	if(j!=0){
		printf("invalid attack");
	}
	else{
		if(dau==0 && duoi >=0){
			printf("You slayed the Dragon.");
		}
		if(dau>0 && duoi>0){
			printf("You die.");
		}
		if(dau<0 || duoi <0){
			printf("invalid attack");
		}
	}
}
