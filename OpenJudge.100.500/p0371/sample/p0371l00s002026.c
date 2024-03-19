#include <stdio.h>

int main(){

int i, n, x;

int max = 0, min = 1000000, sum = 0;

scanf("%d", &n);

for(i = 0; i < n; i++){

   scanf("%d", &x);
   if(x > max){
   max = x;}
   if(x < min){
   min = x;}
   sum = sum + x;

}

printf("%d %d %d\n", min, max, sum);

return 0;

}