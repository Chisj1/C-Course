#include<stdio.h>
#include<string.h>
int main(){
	char a[100][100];
	int i,j,n,kiemTra=0, b[100];
	scanf("%d", &n);
	for(i=-1;i<n;i++){
		fgets(a[i], sizeof(a[i]), stdin);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(a[i],a[j])==0){
				b[i]=1;
				b[j]=1;
			}
		}
		if(b[i]!=1){
			printf("%s", a[i]);
		}
	}
	return 0;
}
