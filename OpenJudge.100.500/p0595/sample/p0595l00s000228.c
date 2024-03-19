#include <stdio.h>

int gcm(int a,int b)
{
        int x,y,r,tmp;
        if(a>b) {x=a;y=b;}
        else   {x=b;y=a;}
        r=x%y;
        if(r==0) return y;
        else return gcm(y,r);
}
int main(void)
{
        int a,b,k,i,g;
        scanf("%d%d%d",&a,&b,&k);

        g=gcm(a,b);
        for(i=1;i<g;i++){
                if(a%i==0 && b%i==0) k--;
                if(k==0) break;
        }
        printf("%d\n",i);
        return 0;
}
