#include <stdio.h>
main(n){
    for(;~scanf("%d",&n);){
      n=n>18?36-n:n;
      printf("%d\n",n<0?0:(n+1)*(n+2)*(n+3)/6-(n>9?(n-9)*(n-8)*(n-7)*2/3:0));
    }
}