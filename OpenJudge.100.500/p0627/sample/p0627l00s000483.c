#define _CRAT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    if(a>=0 && b>=0){

        if(a*b > a+b){
            printf("%d", a*b);
        }
        else{
            printf("%d", a+b);
        }
    }

    else if(a<0||b<0){

        if(a<b){
            printf("%d", a+b);
        }

        else{
            printf("%d", a-b);
        }
    }

    else if(a<0 && b<0){
        printf("%d", a*b);
    }

    return 0;
}