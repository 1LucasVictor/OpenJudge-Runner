#include <stdio.h>
int main(void) {
    int i;
    int j;
    scanf("%d %d",&i,&j);
    if(i%2==1 && j%2==1){
        printf("Odd");
    }
    else {
        printf("Even");
    }
    return 0;
}