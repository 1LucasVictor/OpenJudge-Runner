#include <stdio.h>
int main(void){
    // Your code here!
   int h;
   
   int w;
   while(1) {
       scanf("%d%d", &h, &w);
       if(h == 0 && w == 0)
       return(0);
       int i;
       for(i = 0; i < h; i++) {
           int j;
           for(j = 0; j < w; j++) {
               if((i == 0 || i == h-1) || (j == 0 || j == w-1)) putchar('#');
               else putchar('.');
               }
               if(i < h-1) putchar('\n');
               else{
                   putchar('\n');
                   putchar('\n');
                   }
                   }
                   }
                   return 0;
                   }

