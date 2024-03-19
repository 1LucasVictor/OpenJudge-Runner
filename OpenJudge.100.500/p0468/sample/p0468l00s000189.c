#include<stdio.h>

int main(){
    char now[3], previous[3];
    scanf("%s", previous);
    if (previous[1] == 'B')
        printf("ARC");
    else if (previous[1] == 'R')
        printf("ABC");
    return 0;
}
