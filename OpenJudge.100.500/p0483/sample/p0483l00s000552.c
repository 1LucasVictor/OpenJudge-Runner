#include<stdio.h>
int main()
{
int N;
scanf("%d",&N); 
if(N>=100 && N<=999)
{
if(N%10==7)
    printf("Yes\n");
if(N%10!=7)
    printf("No\n");
}
else
printf("No output");
return 0;
}