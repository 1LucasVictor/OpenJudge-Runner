#include <stdio.h>

int main(void){
   int money,yen500,yen5;

   scanf("%d",&money);
                                                                                
   yen500=money/500;
   money-=500*yen500;
   yen5=money/5;

   printf("%d\n",yen500*1000+yen5*5);
}
