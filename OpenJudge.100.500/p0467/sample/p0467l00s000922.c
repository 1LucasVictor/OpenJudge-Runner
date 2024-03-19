#include<stdio.h>
int main()
{
    int a,b,c,k;
    scanf("%d%d%d%d",&a,&b,&c,&k);
    int s=0;
    while(k!=0){k=k-1;
        s++;
        a--;
        if(a==0){break;}}
    while(k!=0)
    { k=k-1;
        b--;
        if(b==0){break;}
        }
    while(k!=0)
    {k=k-1;
        s=s-1;
        c--;
        if(c==0){break;}}
        
    printf("%d",s);
    return 0;
}