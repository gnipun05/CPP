#include <stdio.h>

int main () {

   char *names[4] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };

   for (int i = 0; i < 4; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }

   return 0;
}