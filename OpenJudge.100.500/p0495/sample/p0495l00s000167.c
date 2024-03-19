#include<stdio.h>

int main() {
    char S[3];
    int i;

    for(i = 0; i < 3; i++) {
        scanf("%c", &S[i]);
    }

    if((S[0] == S[1]) && (S[0]== S[2])){
        printf("No");
    } else {
        printf("Yes");
    }


    return 0;
}