#include<stdio.h>
#include<string.h>

int main(){
    char S[256];
    char A[256]="AAA";
    char B[256]="BBB";
    scanf("%s",S);
    if(strcmp(S,A)==0||strcmp(S,B)==0){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}