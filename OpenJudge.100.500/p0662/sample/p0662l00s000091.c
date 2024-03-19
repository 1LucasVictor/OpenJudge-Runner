#include <stdio.h>

int main(void)
{
        int a,b,c,d;
        int diff, up,low;
        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(a>c){
                low = a;
        }else{
                low = c;
        }

        if(b<d){
                up = b;
        }else{
                up = d;
        }

        if(b<c){
                up=0;
        }

        diff=up-low;
        if(diff<0){
                diff=0;
        }

        printf("%d",diff);
        return 0;
}