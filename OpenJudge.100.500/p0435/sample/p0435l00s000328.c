#include <stdio.h>
#include <math.h>
int main(){
   long int n, d;
   scanf("%ld%ld", &n, &d);
    long int x, y, ans = 0;
   for(int i = 0; i < n; i++){
       scanf("%ld%ld", &x, &y);
       if(d*d >= x*x + y*y){
           ans++;
       }
   }
   printf("%ld", ans);
   return 0;
}