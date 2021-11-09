#include<stdio.h>
#include<math.h>
bool judgeSquareSum (int number){
	if(number<4) return false;
	for(int i=2;i<sqrt(number);i++){
		int p = sqrt(number-i*i);
		if(p==sqrt(number-i*i))
			return true;
	}
		return false;
}

