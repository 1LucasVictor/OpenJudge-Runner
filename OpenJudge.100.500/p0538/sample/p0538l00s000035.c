#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (void) {
int d,n;
scanf("%d %d",&d,&n);
if ((d<=9 && d>=1)&&(n<=9 && n>=1))
{
printf("%d",d*n);
}
else printf("-1");

return EXIT_SUCCESS;
}

