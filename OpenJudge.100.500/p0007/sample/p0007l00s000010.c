#include<stdio.h>
int main(void)
{
    int a,b,c,d,n;
    int count=0;
    while(scanf("%d",&n)!=EOF){
        for(a=1;a<=9;a++){
            for(b=1;b<=9;b++){
                for(c=1;c<=9;c++){
                    for(d=1;d<=9;d++){
                        if(a+b+c+d==n)
                            count++;
                          }
                    }
                }
            }
    printf("%d\n",count);
    }
    return 0;
}