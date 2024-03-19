#include <stdio.h>
#include <math.h>

int main(void) {
   int i;
   int n, d;
   int cnt = 0;

   scanf("%d %d", &n, &d);

   double x[n], y[n];
   double d0[n];

   for(i = 0; i < n; i++) {
      scanf("%lf %lf", &x[i], &y[i]);
   }

   for(i = 0; i < n; i++) {
      d0[i] = sqrt(x[i]*x[i] + y[i]*y[i]);

      if(d0[i] <= d) {
         cnt++;
      }
   }

   printf("%d\n", cnt);

   return 0;
}
