#include <stdio.h>

int main(void) {
    char code[4];
    scanf("%s",code);
    int count = 0;
    if(code[0] == code[1]) count++;
    if(code[1] == code[2]) count++;
    if(code[2] == code[3]) count++;
    if(count == 0) printf("Good\n");
    else printf("Bad\n");
}