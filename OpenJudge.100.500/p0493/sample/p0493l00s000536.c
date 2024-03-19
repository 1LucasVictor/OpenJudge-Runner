#include <stdio.h>

 int main(void){
     int yen;
     int h = 0;
     scanf("%d", &yen);

     h = (yen/500*1000) + ((yen%500)/5*5);
     printf("%d\n", h);
     return 0;

 }