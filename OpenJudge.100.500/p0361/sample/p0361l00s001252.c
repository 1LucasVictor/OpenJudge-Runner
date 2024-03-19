#include<stdio.h>
#define I 60

int main(void)
{
    int S; scanf("%d", &S);
    
    printf("%d:%d:%d\n", ((S/I)/I)%I, (S/I)%I, S%I);
    
    return 0;
}
