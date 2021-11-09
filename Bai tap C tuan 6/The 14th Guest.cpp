#include <stdio.h>
#include <string.h>

int main() {
   char str[15][100], t[100], da[10];
   for (int i = 0; i < 13; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }
   strcpy(str[13], "Louis XIV\n");
   for (int i = 0; i < 13; ++i) {
      for (int j = i + 1; j < 14; ++j) {
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(t, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], t);
         }
      }
   }
   for (int i = 0; i < 14; ++i) {
      printf("%s", str[i]);
   }
   return 0;
}
