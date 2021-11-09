#include<stdio.h>
#include<math.h>
double giaiThua(double a){ // Ham nay de tinh giai thua
	if(a!=1){
		return a*giaiThua(a-1); //De quy de tinh giai thua
	}
	else return 1;
}
int main (){
	double sum=1, oldSum=0 ,j=1,n;//Muc dich cua Sum va Oldsum la kiem tra sai so 
	scanf("%lf", &n);
	while(sum-oldSum>0.001){ //Khi chua dat den gia tri sai so can thiet thi tiep tuc tinh
		oldSum = sum;//Gan gia tri cua Sum va Old Sum de so sanh sau
		sum += pow(n,j)/giaiThua(j); //Ap dung cong thuc de tinh Sum
		j++;
	}
	printf("%.4lf", sum);
}
