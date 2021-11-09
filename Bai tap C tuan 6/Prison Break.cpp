#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Michael Scofield
//Kaniel Outis
int dem(char *s,char *s1){
	int i;
	int j=0;
	for(i=0;s[i]!='\0';i++){
		if(strstr(&s[i],s1)==&s[i]){
			j++;
		}
	}
	return j;
}

void thay(char *s){
	int xuatHien = dem(s,"Kaniel Outis");
	int len=strlen(s);
	int  i=0,j=0;
	char* snew = (char *) malloc(len+xuatHien*4);
	for(i=0;s[i]!='\0';){
		if(strstr(&s[i],"Kaniel Outis")==&s[i]){
			strcpy(&snew[j],"Michael Scofield");
			i += 12;
			j += 16;
		}
		else{
			snew[j++] = s[i++];
		}	
	}
	snew[j]='\0';
	puts(snew);
}

int main(){
	int i,j=0;
	char str[500];
	scanf("%[^\n]",str);
	thay(str);
}
