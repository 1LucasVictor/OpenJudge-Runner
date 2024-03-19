#include<stdio.h>
 
int main(void){
    char str[20];
    int i=0;

    scanf("%s",str);

    while(str[i]){
        i++;
    }

    for(i -=1;i>=0;i--){
        printf("%c",str[i]);
    }
        printf("\n");

    return 0;
}