# include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d",&a,&b,&c);
    d=a-b;
    e=c-d;
    if(e>0) printf("%d\n",e);
    else printf("0\n");
    return 0;
}
