#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char* c;
    scanf("%s",c);

    int a=0,b=0;
    while(*c!='\0'){
        if(*c=='A'){
            a=1;
        }else if(*c=='B'){
            b=1;
        }

        c++;
    }

    if(a==1 && b==1){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}