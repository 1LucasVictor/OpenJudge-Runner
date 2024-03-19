#include <stdio.h>

int main (void){
    char str[3];
    int num;

    num = scanf("%s",str);
    switch (str[num -1])
    {
    case '3':
        printf("bon\n");
    break;

    case '0':
    case '1':
    case '6':
    case '8':
        printf("pon\n");
    break;
    default:
        printf("hon\n");
    break;
    }

    return 0;  
}