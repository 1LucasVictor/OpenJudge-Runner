#include <stdio.h>

int main(void){
    int A,B;
    int i;
    int plug = 1;
    int count = 0;
    scanf("%d",&A);
    scanf("%d",&B);
    while(plug<B){
        plug += A-1;
        count++;
    }
    printf("%d\n",count);
}