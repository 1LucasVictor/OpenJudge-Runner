#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
float x,y;
while((scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f))==6)
if((a&&b&&c&&d&&e&&f)>=-1000&&(a&&b&&c&&d&&e&&f)<=1000)
{
    y=(float)(((c*d)-(f*a))/((b*d)-(e*a)));
    x=((c-(b*y))/a);
    printf("%0.3f %0.3f\n",x,y);
}
return 0;
}