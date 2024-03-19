#include<stdio.h>

int main(void) {
   int h, n;
   int i;
   int max = 0;

   scanf("%d %d",&h, &n);
   int a[n];

   for(i = 0; i < n; i++) {
      scanf("%d",&a[i]);
   }

   for(i = 0; i < n; i++) {
      max += a[i];
   }

   if(h - max <= 0) {
      printf("Yes\n");
   } else {
      printf("No\n");
   }
   return 0;
}
