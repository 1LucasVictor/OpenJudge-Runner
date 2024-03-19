#include <stdio.h>
int main(void)
{
int X,gohyaku,go,kouhuku;
scanf("%d",&X);
gohyaku=X/500;
X=X%500;


go=X/5;
kouhuku=gohyaku*1000+go*5;
printf("%d",kouhuku);
return 0;
}