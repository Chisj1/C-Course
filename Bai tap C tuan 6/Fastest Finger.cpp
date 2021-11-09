#include <stdio.h>
#include <string.h>

int main() {
	int hv, b[10];
	for(int i=0;i<4;i++) b[i]=i+65;
   char str[4][100], t[100], da[10];
   for (int i = 0; i < 4; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }
   for(int i=0;i<4;i++) da[i] = i +'A';
   for (int i = 0; i < 4; ++i) {
      for (int j = i + 1; j < 4; ++j) {
         if (strcmp(str[i], str[j]) > 0) {
         	hv=b[i];
			b[i]=b[j];
			b[j]=hv;
            strcpy(t, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], t);
         }
      }
   }
   for (int i = 0; i < 4; ++i) {
      printf("%c ", b[i]);
   }
   return 0;
}
