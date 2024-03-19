#include<stdio.h>

int main(void) {
   int a, b, c, k;
   int i,j,m;
   scanf("%d %d %d %d",&a, &b, &c, &k);
   int ans = 0;
   for(i = 0; i < a; i++) {
      ans += 1;
      k--;
      if(k == 0) {
         printf("%d\n",ans);
      }
   }
   for(j = 0; j < b; j++) {
      ans += 0;
      k--;
      if(k == 0) {
         printf("%d\n",ans);
      }
   }
   for(m = 0; m < c; m++) {
      ans += -1;
      k--;
      if(k == 0) {
         printf("%d\n",ans);
      }
   }
   return 0;
}