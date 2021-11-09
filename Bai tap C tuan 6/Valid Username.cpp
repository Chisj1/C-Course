#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,soKiTu=0,kiemTra=0;
	scanf("%s", a);
	for(i=0;i<strlen(a);i++){
		if(a[i]<'1'||(a[i]>'9'&&a[i]<'A')||(a[i]>'Z'&&a[i]<'a')||a[i]>'z'||(a[0]>='1'&&a[0]<='9')){
			kiemTra;
			break;
		}
		soKiTu++;
	}
	if(kiemTra==1||soKiTu<6||soKiTu>15) printf("Invalid username.");
	else printf("Valid username.");
	
}
