#include<stdio.h>

int main(void){
    char S;

    scanf("%s", &S);

    if(S == "AAA" || S == "BBB"){
        printf("No");
    }else{
        printf("Yes");
    }

    return 0;
}