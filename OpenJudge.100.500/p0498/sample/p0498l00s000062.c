#include <stdio.h>

int main(){
    int i;
    scanf("%d",&i);
    if((i%2)==1)
        i++;
    printf("%d",i/2);
    return 0;
}