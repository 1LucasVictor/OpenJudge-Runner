#include <stdio.h>

int main(){

int i, n, x;

int max = -1000001, min = 1000001;

long sum;

sum = 0;

scanf("%d", &n);

for(i = 0; i < n; i++){

   scanf("%d", &x);
   if(x > 1000000 || x < -1000000 || n > 10001){break;}
   if(x > max){
   max = x;}
   if(x < min){
   min = x;}
   sum += x;

}

printf("%d %d %d\n", min, max, sum);

return 0;

}