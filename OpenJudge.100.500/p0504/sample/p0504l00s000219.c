#include<stdio.h>
int main()
{
int H,A,N;
scanf("%d %d",&H,&A);
N=(H+A-1)/A;
printf("%d\n",N);
return 0;
}