#include<stdio.h>
#include<math.h>
unsigned int chinhphuong(unsigned int x)
{
	if(pow(x,0.5)==(int)pow(x,0.5)) return 1;
	return 0;
}

int main()
{
	int a,b,j=0;
	unsigned int i;
	do
	{
		printf("Vui long nhap 2 so duong : ");
		scanf("%d%d",&a,&b);
	}while(a<=0||b<=0);
	
	for(i=a;i<=b;i++)
	{	
		if(chinhphuong(i)){
			printf("%d ", i);
			j++;
		}
	}
	if(j==0) printf("Khong co so chinh phuong giua %d va %d ", a, b);
	
	return 0;
}
