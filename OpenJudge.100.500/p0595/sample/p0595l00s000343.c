#include <stdio.h>
int main(void)

{
    int a,b,k,t,i,r,r1,r2;

    scanf("%d %d %d",&a,&b,&k);

    if((1<=a)&&(a<=100)&&(1<=b)&&(b<=100)&&(1<=k)){
       if(a<b){
         t = a;
         a = b;
         b = t;
       }
       i = b;
       while(k!=0){
            r1 = a%i;
            r2 = b%i;
            if(r1 == r2) {r = i;i--;k = k-1;}
            else i--;
       }
    printf("%d\n",r);
    }
    return 0;
}
