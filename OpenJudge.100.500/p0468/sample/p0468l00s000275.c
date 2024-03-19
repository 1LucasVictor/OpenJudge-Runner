#include<stdio.h>
#include<string.h>

int main(void){
    
    //char B[3];
    char *S;
    char *A = "ABC";

    scanf("%s",S);

    //strcpy(S,B);

    if(strcmp(S,A)==0){
        printf("ARC");
    }
    else{
        printf("ABC");
    }
    return 0;
}