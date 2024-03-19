#include<stdio.h>

int main(void) {
   int n;
   scanf("%d",&n);
   int cnt = 0;
   int i = 1;

   while(i <= n) {
      cnt++;
      i += 2;
   }

   printf("%d\n",cnt);

   return 0;
}

