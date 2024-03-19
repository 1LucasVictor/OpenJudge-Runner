#include<stdio.h>
int main()
{
int A, B,C;
scanf("%d%d%d",&A,&B,&C);
if((B+C)<=A)
printf("0\n");
else
printf("%d\n",B+C-A);
return 0;
}