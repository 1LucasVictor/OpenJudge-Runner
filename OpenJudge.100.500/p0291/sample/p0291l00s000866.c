#include<stdio.h>

int main() {
   int R[200000];
   int n, i;
   int maxv=-200000000;
   int minv;

   scanf("%d", &n);

   for(i=0; i<n; i++) {
      scanf("%d", &R[i]);
   }
   minv=R[0];
   for (i=1; i<n; i++) {
      if (maxv<R[i]-minv) {
         maxv=R[i]-minv;
      }
      if (minv>R[i]) {
         minv=R[i];
      }
   }
   printf("%d\n",maxv);
   return 0;
   
}