#include <stdio.h>

int main(void)
{
   int S,h,m,s;

   scanf("%d\n", &S);
   printf("%d:%d:%d\n", S/3600, S%3600/60,S%60);

    return 0;
}
