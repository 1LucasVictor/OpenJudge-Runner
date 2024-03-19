#include<stdio.h>

int main(){
    int a,b,sum,minus,mul;
    scanf("%d",&a);
    scanf("%d",&b);

    sum=a+b;
    minus=a-b;
    mul=a*b;

    if(a<=1000 && b<=1000 && a>=-1000 && b>=-1000){
           if(sum>minus && sum>mul) printf("%d",sum);

           else if(minus>sum && minus>mul) printf("%d",minus);

           else if(mul>minus && mul>sum) printf("%d",mul);

    }

return 0;
}
