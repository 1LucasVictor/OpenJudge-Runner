#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
int main(void) {
    char S[4];
    scanf("%s",&S);
   for (int i=0;i<3;i++){
     if (S[i]==S[i+1]) {printf("Bad");
                        return 0; }

   }
   printf("Good");
 return EXIT_SUCCESS;
}
