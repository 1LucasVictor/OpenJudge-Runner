#include<stdio.h>

int main(void){
    char str[10];

    scanf("%s", str);

    for (int i = 0; i < 3; i++) {

        if (str[i] == str[i+1]) {
            printf("Bad");
            break;
        } else if (i == 2) {
            printf("Good");
        }

    }

}