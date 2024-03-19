#include <stdio.h>

int main(void){
    int flag = 1, i;
    char input[5];
    scanf("%s", input);
    for(i=0;i < 3;i++){
        if(input[i]==input[i+1])
            flag = 0;
    }
    if(flag==1){
        printf("Good");
    }else{
        printf("Bad");
    }
    return 0;
}