#include<stdio.h>
#include<string.h>

int main(void){

    char S[10];
    char T[11];
    int flag=1,i;

    scanf("%s",S);
    scanf("%s",T);

    for(i=0;i<strlen(S);i++){
        if(S[i] != T[i]){
            flag = 0;
            break;
        }
    }

    i++;

    if(strlen(T) != i){
        flag=0;
    }

    if(flag==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}