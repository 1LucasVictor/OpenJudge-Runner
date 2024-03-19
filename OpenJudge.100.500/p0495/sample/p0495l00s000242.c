#include <stdio.h>


int main(void){
    char s[3];

    scanf("%s", s);

    for(int i = 0; i < 2; i ++){
        if(s[i] != s[i + 1]){
            printf("Yes");
            return (0);
        }else{
            printf("No");
            return(0);
        }
    }
}