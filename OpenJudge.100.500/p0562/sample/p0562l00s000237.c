#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
scanf("%d%d",&a,&b);
int i=0;
int mini=0;
mini=a*i;
while(mini < b)
{
    i++;
    mini=a*i;
    mini=mini-(i-1);
}
printf("%d\n",i);
}
