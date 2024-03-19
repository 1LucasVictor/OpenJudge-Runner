#include <stdio.h>

int main()
{
    int n,cnt,a,b,c,d;

    while(scanf("%d",&n)!=EOF){
        cnt=0;

        if(n>36){
            printf("0\n");
            continue;
        }

        for(a=0;a<=9;a++){
            for(b=0;b<=9;b++){
                for(c=0;c<=9;c++){
                    for(d=0;d<=9;d++){
                        if(a+b+c+d==n) cnt++;
                    }
                }
            }
        }

        printf("%d\n",cnt);
    }

    return 0;
}