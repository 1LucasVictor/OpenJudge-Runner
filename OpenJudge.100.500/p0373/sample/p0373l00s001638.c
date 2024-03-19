#include<stdio.h>
int main(void)
   {int H[10000], W[10000], i, j, k, l;
    i = 0;
    while(1) {
       scanf("%d %d", &H[i], &W[i]);
       i++;
       if(H[i - 1] == 0 && W[i - 1] == 0)
          break;
    }
    for(j = 0; j < i - 1; j++) {
       for(l = 0; l < W[j] ; l++){
          printf("#");
       }
       printf("\n");
       for(k = 1; k < H[j] - 1; k++) {
          printf("#");
          for(l = 1; l < W[j] - 1; l++) {
             printf(".");
          }
          printf("#\n");
       }
       for(l = 0; l < W[j] ; l++){
          printf("#");
       }       
       printf("\n");
    }
    return 0;
}