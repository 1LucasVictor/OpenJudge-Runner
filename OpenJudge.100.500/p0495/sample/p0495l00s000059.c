#include<stdio.h>

int main()
{
    char str[3];
    scanf("%s",str);
    if (str[0]==str[1] && str[0]==str[2]) {
        printf("No");
    }else {
        printf("Yes");
    }
    printf("\n");
    return 0;
}