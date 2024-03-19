#include <stdio.h>
int main (void)
{
    int A,B,a,s,v;
    scanf("%d%d",&A,&B);
    a=A+B;
    s=A-B;
    v=A*B;
    if((a>=s)&&(a>=v))
        printf("%d\n",a);
    else if((s>=a)&&(s>=v))
        printf("%d\n",s);
    else
        printf("%d\n",v);
return 0 ;
}