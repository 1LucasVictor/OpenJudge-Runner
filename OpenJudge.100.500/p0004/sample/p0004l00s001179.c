#include <stdio.h>

int main()
{
    int a,b,temp,gcd,i,j,a1,b1,store1,store2;
    while(scanf("%d%d",&a,&b) ==2){
        if(a<b){temp=a; a=b; b=temp;}
        a1=a; b1=b; store1=a;store2=b;
        for(;;){
            gcd=b;
            a%=b;
            if(a==0)break;
            b=a;
            a=gcd;
        }
        for(i=1,j=1;;){
            if(a1==b1)break;
            else if(b1<a1){b1=store2*i;i++;}
            else if(b1>a1){a1=store1*j;j++;}
        }
        printf("%d %d\n",gcd,a1);
    }
    return 0;
}