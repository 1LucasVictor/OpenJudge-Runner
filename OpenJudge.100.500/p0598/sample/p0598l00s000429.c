#include <stdio.h>

int main(void)
{

        int a,b,c,s;

        scanf("%d%d",&a,&b);

        if ((a<1)||(b<1)||(a>20)||(b>20)){
                return 1;
                }
        c=b%a;
        if(c==0){
        s=a+b;
        }
        else s=b-a;

        printf("%d",s);
        return 0;
}