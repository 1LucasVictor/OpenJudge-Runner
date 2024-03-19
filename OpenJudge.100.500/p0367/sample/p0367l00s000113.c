#include<stdio.h>
int main()
{
    int j,c,a,b,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(j=a;j<=b;j++) {
        if(c%j==0)
            count++;
    }
    printf("%d\n",count);
}

