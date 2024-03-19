#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,di,dx,dy,i;
    float x,y;
    for(i=1;i<=2;i++){
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    di=(a*e)-(b*d);
    dx=(c*e)-(b*f);
    dy=(a*f)-(c*d);
    x=dx/di;
    y=dy/di;
    printf("%.3f %.3f\n",x,y);
}
return 0;
}