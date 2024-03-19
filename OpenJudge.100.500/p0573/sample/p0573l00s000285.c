#include<stdio.h>

int main(){

    char s[4];
    scanf("%s", s);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3 - i; j++){

            if(s[j] > s[j + 1]){
                int tmp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = tmp;
            }

            //printf("%s\n", s);
        }
    }

    if(s[0] == s[1] && s[1] != s[2] && s[2] == s[3]){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}