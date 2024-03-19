#include <stdio.h>

int main(void){
    int s;
    scanf("%d",&s);
    int tmp = s%10;
    s /= 10;
    for(int i = 0;i < 3;i++){
        if(tmp == s % 10){
            printf("Bad");
            return 0;
        }
        tmp = s%10;
        s /= 10;
    }
    printf("Good");
    return 0;
}