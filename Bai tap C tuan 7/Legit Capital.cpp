#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isLegitCapital(char word[]){
	int kt=1;
	int len = strlen(word);
	if(len==1) return 1;
	else{
		if(isupper(word[0])){
			if(islower(word[1])){
				for(int i=2;i<len;i++){
				if(isupper(word[i])){
					kt=0;
					return 0;
					break;
				}
			}
			}
			else if(isupper(word[1])){
				for(int i=2;i<len;i++){
					if(islower(word[i])){
						kt=0;
						return 0;
						break;
					}
				}
			}
		
		}
	else if(islower(word[0])){
		for(int i=1;i<len;i++){
			if(isupper(word[i])){
				return 0;
				kt=0;
				break;
			}
		}
	}
	if(kt!=0) return 1;
	}
}
int main(){
	char word[20];
	scanf("%s", word);
	if (isLegitCapital(word))
	{
	    printf("Legit");
	}
	else
	{
	    printf("Not legit");
	}
}
