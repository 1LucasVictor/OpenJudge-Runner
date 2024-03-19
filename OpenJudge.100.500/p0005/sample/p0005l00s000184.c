#include<stdio.h>

int main(void){
    char str[25];
    int i;
    for(i=0;EOF!=scanf("%c",&str[i]);i++);
    while(str[i-1]!=NULL){
        printf("%c",str[i-1]);
        i--;
    }
    printf("\0\n");
    return 0;
}