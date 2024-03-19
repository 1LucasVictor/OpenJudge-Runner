#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,s,X;
    scanf("%d",&X);
    if(X>=500){
    a=X/500;
    g=a*1000;
    b=X%500;
    c=b/5;
    d=5*c;
    s=g+d;
    printf("%d\n",s);
    }
    else if(X<500){
        e=X/5;
        f=5*e;
        printf("%d\n",f);
    }


    return 0;
}
