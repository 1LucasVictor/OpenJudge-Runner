#include<stdio.h>

int main(){
    char now[3], previous[3];
    scanf("%s", previous);
    if ((previous[0] == 'A')&&(previous[1] == 'B')&&(previous[2] == 'C'))
        printf("ARC");
    else if ((previous[0] == 'A')&&(previous[1] == 'R')&&(previous[2] == 'C'))
        printf("ABC");
    return 0;
}
