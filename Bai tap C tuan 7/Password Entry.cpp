#include<stdio.h>
int soSo(unsigned int pin){
	int i=0;
	while(pin>=1){
		pin /= 10;
		i++;
	}
	return i;
}

unsigned int getCorrectResponse(unsigned int pin, unsigned int num){
	int lenPin = soSo(pin),lenNum = soSo(num);
	int chuSoPin[lenPin], chuSoNum[lenNum];
	int i=0;
	int re=0;
	for(i=lenPin-1;i>=0;i--){
		chuSoPin[i]=pin%10;
		pin /= 10;
	}
	for(i=lenNum-1;i>=0;i--){
		chuSoNum[i]=num%10;
		num /= 10;
	}
	for(i=0;i<lenPin;i++){
		re = re*10+chuSoNum[chuSoPin[i]];
	}
	return re;
}

int main(){
	unsigned int pin, num;
	scanf("%u%u", &pin, &num);
	printf("%u", getCorrectResponse(pin, num));
}
