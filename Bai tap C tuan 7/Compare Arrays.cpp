void readArray(int a[], int n){
	int i;
	for(i=0;i<n;i++) scanf("%d", &a[i]);
}
int compareArray(int array1[], int array2[], int n){
	int j=0;
	for(int i=0;i<n;i++){
		if(array1[i]==array2[i]){
		j++;
		}
	}
	if(j==n) return 1;
	else return 0;
	
}
