#include<stdio.h>

int main()
{

 int Time, i, min=100000000, max=1, profit;
 profit = max - min;
 scanf("%d",&Time) ;
 
 int price[200000];
 for(i = 0;i < Time;i++) {
   scanf("%d", &price[i]);
 if ((price[i] - min) >= profit) {
       profit = price[i] - min;
   }
   if (price[i] < min) {
       min  = price[i];
   }   
 }
 
 printf("%d\n",profit);
 
 return 0;
}