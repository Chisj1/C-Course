#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int isValid(char s[]){
	int len = strlen(s);
	int kt=1,sum=0;
	int* arr = (int*) calloc (len,len*sizeof(int));
	for(int i=0;i<len;i++)
	{
		switch(s[i])
		{
			case '(':
				arr[i]=1;
				break;
			case ')':
				arr[i]=-1;
				break;
			case '[':
				arr[i]=2;
				break;
			case ']':
				arr[i]=-2;
				break;
			case '{':
				arr[i]=3;
				break;
			case '}':
				arr[i]=-3;
				break;
		}
	}
	for(int i=0;i<len;i++)
	{
		sum+=arr[i];
	}
	if(sum!=0) return 0;
	
	for(int i=0;i<len;i++)
	{
		if(arr[i]==3)
		{
			if(arr[i+1]==-3||arr[i]+arr[i+1]+arr[i+2]+arr[i+3]+arr[i+4]+arr[i+5]==0)
			{
				kt=1;
			}
			else kt=0;
		}
		else if(arr[i]==2)
		{
			if(arr[i+1]==-2||arr[i]+arr[i+1]+arr[i+2]+arr[i+3]==0)
			{
				kt=1;
			}
			else kt=0;
		}
		else if(arr[i]==1)
		{
			if(arr[i+1]==-1)
			{
				kt=1;
			}
			else kt=0;
		}
	}
	return kt;
	
}

int main(){
	
}
