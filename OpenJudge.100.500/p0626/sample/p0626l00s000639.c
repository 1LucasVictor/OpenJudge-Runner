#include <stdio.h>
#include <math.h>
int main (void){
        int A,B;
        scanf("%d",&A);
        scanf("%d",&B);
        printf("%d",B);
        if (A==1) {
          printf("00");
        }else if (A==2) {
          printf("0000");
        }
        printf("\n");
        return 0;
}
