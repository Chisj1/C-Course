#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char* cipher (int k, char* message)
{
	int a=k,b=k,c=k;
	 for(int i=0;i<strlen(message);i++)
	 {
	 	if (message[i]>='a'&&message[i]<='z') 
		 {
		 	while(a>25) a-=26;
		 	if(message[i]+a>'z'){
		 		message[i] = message[i]+a-'z'+'a'-1;
			 }
	 		else
	 			message[i]+=a;
		 }
	 	else if (message[i]>='A'&&message[i]<='Z') 
		 {
		 	while(b>25) b-=26;
		 	if(message[i]+b>'Z')
		 	{
		 		message[i] = message[i]+b-'Z'+'A'-1;
			 }
	 		else
	 			message[i]+=b;
		 }	
		 else if (message[i]>='0'&&message[i]<='9') 
		 {
			while(c>9) c-=10;		 	
		 	if(message[i]+c>'9')
		 	{
		 		while(message[i]+c>'9') message[i] = message[i]+c-'9'+'0'-1;
			}
	 		else
	 		message[i]+=c;
		 }
	 }
	return message;
}

int main(){
	
	printf("%s", cipher(4,"All-convoYs-9-be:Alert1."));
	
}


