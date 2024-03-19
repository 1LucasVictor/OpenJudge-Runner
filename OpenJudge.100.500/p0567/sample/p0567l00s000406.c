#include<stdio.h>
int main()
{
    int a,b,c;
     int d,e;
   
    scanf("%d %d %d",&a,&b,&c);
    d=a-b;
    e=c-d;
    if(e>0)
        printf("%d",e);
    else
        printf("0");

}
