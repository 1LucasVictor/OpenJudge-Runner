#include <stdio.h>

int main() {
    int s;
    scanf("%d",&s);
    if((s/1000-s/100%10)&&(s/100%10-s/10%10)&&(s/10%10-s%10))
        printf("Good");
    else
        printf("Bad");
}