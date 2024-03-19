#include <stdio.h>
int main(void){
    char s[5];
    int test=0,i;
    scanf("%s",s);
    for(i=0;i<3;i++){
        if(s[i]==s[i+1]){
            test=1;
        };
    };
    if(test==0){
        printf("Good");
    }
    else{
        printf("Bad");
    };
    return 0;
};
