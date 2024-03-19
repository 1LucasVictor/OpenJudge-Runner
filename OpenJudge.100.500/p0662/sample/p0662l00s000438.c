#include<stdio.h>
int main()
{
    int a,b,c,d,n;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>c){
        if(b>d)
            n=d-a;
        else n=b-a;
    }
    else{
        if(b>d)
            n=d-c;
        else n=b-c;
    }
    if(n>=0)
        printf("%d",n);
    else printf("0");
    return 0;
}
