#include <stdio.h>
int main(void){
    char str[1024];
    int A, B, sum = 0, count = 0;
    
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d %d", &A, &B);
    
    do{
        if(count == 0){
            sum += A;
        }else{
            sum += A - 1;
        }
        count++;
    }while(sum < B);

    printf("%d\n", count);
}
