#include<stdio.h>
int main()
{
int N,c;
scanf("%d",&N); 
if(N>=100 && N<=999)
{
c=N%10;
if(c==7)
    printf("Yes\n");
else
    printf("No\n");
}
return 0;
}