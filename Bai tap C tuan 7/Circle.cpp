#include<stdio.h>
#include<string.h>
int circle(char moves[]){
	int len = strlen(moves);
	int l=0,d=0,u=0,r=0;
	for(int i=0;i<len;i++){
		switch (moves[i]){
			case 'U':
				u++;
				break;
			case 'D':
				d++;
				break;
			case 'L':
				l++;
				break;
			case 'R':
				r++;
				break;
		}
	}
	if(u==d&&r==l) return 1;
	else return 0;
}


int main(){
	char moves[20];
	scanf("%s", moves);
	printf("%d", circle(moves));
}


