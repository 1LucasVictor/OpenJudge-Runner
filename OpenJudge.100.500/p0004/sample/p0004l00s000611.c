#include<stdio.h>

/*a>b*/
int GCD(int a,int b){

        int k,r,c;

        if(a<b){
                c=a;
                a=b;
                b=c;
        }

        while(1){

        k=a/b;
        r=a-k*b;

        if(r==0) break;

        a=b;
        b=r;
        }
        return b;
}

int main(void){

        int x,y,lcd;

        while(scanf("%d%d",&x,&y)!=EOF){

        lcd=x/GCD(x,y)*y; /* avoid calculate x*y(very large number) */

        printf("%d %d\n",GCD(x,y),lcd);
        }

        return 0;
}