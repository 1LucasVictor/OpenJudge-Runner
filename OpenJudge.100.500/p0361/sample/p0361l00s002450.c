#include<stdio.h>

int main()
{
    int i,h,m,s;
    scanf("%d", &i);
        h=i/3600;
        m=(i%3600)/60;
        s=i%60;
    printf("%d:%d:%d\n",h,m,s);


}

