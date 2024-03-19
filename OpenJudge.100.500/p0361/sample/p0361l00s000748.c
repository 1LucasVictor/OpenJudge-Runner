#include<stdio.h>
int main()
{
    int s,a,b,c,d;
    scanf("%d",&s);
    if(s>=0&&s<=86400){
    a=s/3600;
    b=s%3600;
    c=b/60;
    d=b%60;
    printf("%d:%d:%d\n",a,c,d);
    }
    return 0;
}

