#include <stdio.h>
 
int main(void)
{
    int S;
    scanf("%d", &S);
 
    int sec = S % 60;
    int min = ((S - sec) % 3600) / 60;
    int hour = (S - sec - min * 60) / 3600;
    printf("%d:%d:%d\n", hour, min, sec);
 
    return 0;
}