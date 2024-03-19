#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c>=a&&c<=(a+b))
      printf("safe");
    if(c<a&&c>=(a-b))
      printf("delicious");
    if(c<(a-b)||c>(a+b))
      printf("dangerous");

    return 0;
}