//#include<stdio.h>
#include<string.h>
 int main(void){
    int i;
    char c[1300];
    while(1){
        scanf("%c",&c[i]);
        if(c[i]>=97)printf("%c",toupper(c[i]));
        else printf("%c",tolower(c[i]));
        if(c[i]=='\n')break;
    }
    return 0;
 }