#include<stdio.h>
int main(){
    int a,b,d,e,f;
    scanf("%d%d",&a,&b);
    d = a-b;
    e = a*b;
    f = a+b;
    if (d>=e && d>=f)
        printf("%d",d);
    else if(e>=d && e>=f)
        printf("%d",e);
    else if (f>=d && f>=e)
        printf("%d",f);
    else if (a==0 && b==0)
        printf("%d",a);
        return 0;
}

