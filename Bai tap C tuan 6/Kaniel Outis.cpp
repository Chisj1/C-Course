#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int i,soChu=0,kiemTra=0,dacBiet=0,soSo=0;
	scanf("%[^\n]s", a);
	for(i=0;i<strlen(a);i++){
		if(a[i]<'0'||(a[i]>'9'&&a[i]<'A')||(a[i]>'Z'&&a[i]<'a')||a[i]>'z'){
			dacBiet++;
		}
		else{
			if(a[i]>='0'&&a[i]<='9'){
				soSo++;
			}
			else soChu++;
		}
	}
	printf("%d %d %d",soChu,soSo,dacBiet);
}
