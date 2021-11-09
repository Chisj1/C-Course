#include<stdio.h>
#include<string.h>

void veThuong(char str[]){
	int len=strlen(str);
	char nstr[len];
	int j=0;
	for(int i=0;i<len;i++){
		if(str[i]<'a'||str[i]>'z'){
			if(str[i]>='A'&&str[i]<='Z'){
				str[i]=str[i]+32;
				nstr[j]=str[i];
				j++;	
			}
			else continue;
		}
		else{
				nstr[j]=str[i];
				j++;
		}	
	}
	strcpy(str,nstr);
}
int areAnagrams(char str1[], char str2[]){
	char hv;
	int j=0;
	veThuong(str1);
	veThuong(str2);
	for(int i=0;i<strlen(str1)-1;i++){
		for(int j=i+1;j<strlen(str1);j++ ){
			if(str1[i]<=str1[j]){
				hv=str1[i];
				str1[i]=str1[j];
				str1[j]=hv;
			}
			if(str2[i]<=str2[j]) {
				hv=str2[i];
				str2[i]=str2[j];
				str2[j]=hv;
			}
		}
	}
	j=0;
	for(int i=0;i<strlen(str1);i++){
		if(str1[i]!=str2[i]){
			return 0;
			break;
		}
		else j++;
	}
	if(j==strlen(str1)) return 1;
}

