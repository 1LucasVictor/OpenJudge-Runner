#include <stdio.h>
int main(void){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int kotae = B + C - A;
       if (kotae < 0){
          kotae = 0;
          
       }
    printf("%d\n", kotae);
return 0;
}