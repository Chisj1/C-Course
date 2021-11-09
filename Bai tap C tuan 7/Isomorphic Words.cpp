#include<stdio.h>
#include<string.h>

int isIsomorphic(char a[], char b[]){
	int len1=strlen(a),len2=strlen(b);
	if(len1!=len2) return 0;
	else{
		for(int i=0;i<len1;i++){
			for(int j=i+1;j<len1;j++){
				if((a[i]==a[j]&&b[i]!=b[j])||(b[i]==b[j]&&a[i]!=a[j]))
					return 0;
			}
			if(i==len1-1) return 1;
		}
	}
	
}

int main(){
	char a[20], b[20];
	scanf("%s%s", a, b);
	printf("%d", isIsomorphic(a, b));
}
