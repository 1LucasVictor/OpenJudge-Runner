    #include<stdio.h>
    int main()
    {
        long long int a,b;
        int d,c;
        scanf("%lld%lld",&a,&b);
        a=a%b;
        d=a-b;
        d=abs(d);
        if(a>d)
            printf("%d\n",d);
        else printf("%d\n",a);
          return 0;
    }