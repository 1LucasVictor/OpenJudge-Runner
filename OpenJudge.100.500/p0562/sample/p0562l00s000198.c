#include <stdio.h>
int main(void){
    char str[1024];
    int A, B, sum, count = 1;
    
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d", &A, &B);
    
    sum = A;
    
    while(sum < B){
        sum += A - 1;
        count++;
    }

    printf("%d\n", count);
  
  return 0;
}