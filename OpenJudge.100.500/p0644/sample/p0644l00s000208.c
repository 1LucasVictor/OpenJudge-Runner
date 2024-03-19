#include<stdio.h>

int main(void)
{
    char s;
    int i, iCnt=0;

    for (i=0; i<3; i++) {
        scanf("%c",&s);
        if ('1' == s) {
            iCnt++;
        }
    }

    printf("%d\n", iCnt);

    return 0;
}