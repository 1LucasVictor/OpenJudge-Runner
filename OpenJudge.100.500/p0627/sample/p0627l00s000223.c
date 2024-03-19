#include <stdio.h>

int main(void)
{
    int a, b, sum, dif, pro, res;
    scanf("%d %d", &a, &b);
    sum = a + b;
    dif = a - b;
    pro = a * b;

   if(sum >= dif){
       if(sum >= pro){
           res = sum;
       }else if(pro > sum){
           res = pro;
       }
   }

   if(dif > sum){
       if(dif >= pro){
           res = dif;
       }else if(pro > dif){
           res = pro;
       }
   }

   printf("%d\n", res);

   return 0;
}