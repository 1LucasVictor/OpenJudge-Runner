#include<stdio.h>
int main(void){
    char ab;
    while(1){
        scanf("%c",&ab);
        if(ab=='\n')break;
    if(islower(ab)){
        ab=toupper(ab);
        printf("%c",ab);
    }else if(isupper(ab)){
        ab=tolower(ab);
        printf("%c",ab);
    }else{
        printf("%c",ab);
    }
    }printf("\n");
return 0;
}