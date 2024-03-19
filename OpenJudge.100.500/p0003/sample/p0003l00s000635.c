#include<stdio.h>
int main(void){
   double a, b, c, d, e, f, L, M, N, O,  X, Y; 
   while ( scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF ) {
      L = f - e * c / b;
      M = d - a * e / b;
      N = f - d * c / a;
      O = e - d * b / a;
      X = L / M;
      Y = N / O;
      printf("%.3lf %.3lf\n",  X, Y);
   }
   return 0;
}