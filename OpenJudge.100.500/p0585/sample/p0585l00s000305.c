#include <stdio.h>

int main(void)
{
int A,B,T;
int count,sum;

scanf("%d %d %d", &A,&B,&T);
count=T/A;
sum=B*count;

printf("%d\n", sum);

return 0;
}