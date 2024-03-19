#include <stdio.h>
int main()
{
    int a,b,c,aa;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        aa=a;
        a=b;
        b=aa;
    }
    if(b>c){
        aa=b;
        b=c;
        c=aa;
    }
    if(a>b){
        aa=a;
        a=b;
        b=aa;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}