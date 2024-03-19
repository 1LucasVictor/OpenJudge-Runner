#include<stdio.h>
#include<stdlib.h>

int main(){
    char S[4];
    int i;
    int result=0;
    scanf("%s",&S);

    for(i=0;i<3;i++){
        if(S[i]==S[i+1]){
            result=1;
            break;
        }
    }

    if(result==0){
        printf("Good\n");
    }else{
        printf("Bad\n");
    }
    return 0;
}