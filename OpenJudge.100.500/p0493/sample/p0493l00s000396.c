 #include <stdio.h>
 #include <malloc.h>
 #include <string.h>

 int main(void) {
   int x, y;
   scanf("%d", &x);

   y=(x/500)*1000;
   y+=(x%500)/5*5;
   printf("%d", y);
   return 0;
 }
