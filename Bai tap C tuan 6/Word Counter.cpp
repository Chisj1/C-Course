#include<stdio.h>
#include<string.h>
//Test case 5 bi loi
int soTu(char* str) {
//Ham dem so tu trong 1 cau
	int soTu = 1, i;
	for (i = 0; i < strlen(str) - 1; i++) {
		if (str[i] == ' ' && str[i + 1] != ' ') { //Dem so space, neu ben canh space khong la 1 space thi +1 tu
			soTu += 1;
		}
	}
	return soTu;
}
int main() {
	int i, len;
	char a[1000], pl = ' ';
	scanf("%[^\n]s", a);// Doc den khi nao gap Enter thi dung lai
	len = strlen(a);
	if (a[len] != pl) {
		printf("%d", soTu(a));// Truong hop neu ket thuc cau la 1 space
	}
	else {
		printf("%d", soTu(a) - 1);
	}
}
