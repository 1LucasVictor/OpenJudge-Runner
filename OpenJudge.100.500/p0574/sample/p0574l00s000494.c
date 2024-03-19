#include<stdio.h>

int main(void){
    char s[5], tmp;
    scanf("%s", s);
    tmp = s[0];
    for(int i=1; i<4; i++){
        if(tmp == s[i]){
            printf("Bad\n");
            break;
        }
        else {
            if(i == 3)printf("Good\n");
            else tmp = s[i];
        }
    }
    return 0;
}
