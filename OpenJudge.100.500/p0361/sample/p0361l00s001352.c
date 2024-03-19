
#include<stdio.h>

int main(void){

   int h, m, s, sl;

   scanf("%d", &sl);

   h = sl/3600;

   s = sl%3600;

   m = s/60;

   s %= 60;

   printf("%d:%d:%d\n", h, m, s);

}
