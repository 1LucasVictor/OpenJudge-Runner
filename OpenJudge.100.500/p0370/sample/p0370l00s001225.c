#include<stdio.h>
int main()
{
    int a[20000],b[20000],i;
    char m[20000],o[20000];
    for(i=1;i<=20000;i++)
    {
        scanf("%d",&a[i]);
        scanf("%c%c",&m[i],&o[i]);
        scanf("%d",&b[i]);
        if(o[i]=='?')
            break;
    }
    for(i=1;i<20000;i++)
    {
        if(o[i]=='+')
            printf("%d\n",a[i]+b[i]);
        else if(o[i]=='-')
            printf("%d\n",a[i]-b[i]);
        else if(o[i]=='*')
            printf("%d\n",a[i]*b[i]);
        else if(o[i]=='/')
            printf("%d\n",a[i]/b[i]);
        else if(o[i]=='?')
            break;
    }
    return 0;
}

