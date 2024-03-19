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
}
printf("%d\n",i);
}
