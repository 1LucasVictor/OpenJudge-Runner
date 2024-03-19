#include<stdio.h>

int main(void){
    int i,flag;
    char s[4];
    flag = 0;

    scanf("%s",s);

    for(i=0; i<=3; i++){
        if(s[i]==s[i+1]){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("Bad\n");
    }else{
        printf("Good\n");
    }

    return 0;
}