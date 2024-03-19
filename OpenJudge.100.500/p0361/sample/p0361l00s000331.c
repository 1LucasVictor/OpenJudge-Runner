
#include<stdio.h>
int main()
{
    int s,h,m,s1;
    scanf("%d",&s);
    h=s/3600;
    m=(s-h*3600)/60;
    s1=s-h*3600-m*60;
    if(h==0)
    {
        printf("%d:%d\n",m,s1);
    }
    if(m==0)
    {
        printf("%d:%d\n",h,s1);
    }
    if(s==0)
    {
        printf("%d:%d\n",h,m);
    }
    if(h==0&&m==0)
    {
        printf("%d\n",s1);
    }
    if(h==0&&s==0)
    {
        printf("%d\n",m);
    }
    if(m==0&&s==0)
    {
        printf("%d\n",h);
    }
    else{
    printf("%d:%d:%d\n",h,m,s1);
    }
    return 0;
}

