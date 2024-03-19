#include <stdio.h>
#include <string.h>

int main() {
    char n[999];
    scanf("%s",n);
    if(n[strlen(n) - 1] == '2' || n[strlen(n) - 1] == '4' || n[strlen(n) - 1] == '5' || n[strlen(n) - 1] == '7' || n[strlen(n) - 1] == '9') {
        printf("hon");
    } else if(n[strlen(n) - 1] == '0' || n[strlen(n) - 1] == '1' || n[strlen(n) - 1] == '6' || n[strlen(n) - 1] == '8') {
        printf("pon");
    } else if(n[strlen(n) - 1] == '3') {
        printf("bon");
    }
}