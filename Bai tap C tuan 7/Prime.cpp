bool isPrime (int number){
	if(number<=1) return false;
	else
		for(int i=2;i<sqrt(number);i++){
			if(number%i==0){
				return false;
				break;
			}
			if(i==sqrt(number)-1){
				return true;
				break;
			}
		}
}

