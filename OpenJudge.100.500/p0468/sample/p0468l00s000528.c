#include<stdio.h>
#include<string.h>

int main(){
    
    char *S;
    char *A = "ABC";

    scanf("%s", S);

    if(strcmp(S,A)==0){
        printf("ARC");
    }
    else{
        printf("ABC");
    }
}