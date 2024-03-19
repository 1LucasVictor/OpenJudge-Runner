#include <stdlib.h>

int happ(int money);
int main(void);

int happ(int money){
   int new, p, q;
   p = money/500;
   new = money%500;
   q = new/5;
   return (1000*p + 5*q);
}

int main(void){
   int money, r;
   scanf("%d", &money);
   r = happ(money);
   printf("%d", r);
   return 0;
}
