#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
scanf("%d%d",&a,&b);
int i=0;
int mini=0;
while(mini < b)
{
    i++;
    mini=a*i;
    mini--;
}
printf("%d\n",i);
}
