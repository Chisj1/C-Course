#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,k,chet=0,i, the;
    char name[100][100];
    scanf("%d %d", &n, &k);
    for (i=0; i<=n; i++){
            fgets(name[i-1], 100, stdin);
    }
    while (n>0){
            chet = chet+k;
            while(chet>=n){ 
                chet = chet - n;
            }
            for (the = chet; the<n-1; the++){
                    strcpy(name[the], name[the+1]);
            }
            n--;
    }
    printf("%s", name[0]);
    return 0;
}
