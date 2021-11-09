char* pigLatin(char word[]){
	int len = strlen(word);
	int i=0;
	if(word[0]=='u'||word[0]=='e'||word[0]=='a'||word[0]=='o'||word[0]=='i'){
		strcat(word,"way");
	}
	else{
		word[len]=word[0];
		while(word[i]!='\0'){
			word[i]=word[i+1];
			i++;
		}
		strcat(word,"ay");
	}
	return word;
}
