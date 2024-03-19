int main()
{
    int  x,y;
    int a,b,c;
    while(~scanf("%d%d",&x,&y))
    {

        a=x+y;
        b=x-y;
        c=x*y;
        if(y==0)
            printf("%d\n",x);
        if(a>b&&a>c)
            printf("%d\n",a);
        if(b>a&&b>c)
            printf("%d\n",b);
        if(c>a&&c>b)
            printf("%d\n",c);
    }
    return 0;
}