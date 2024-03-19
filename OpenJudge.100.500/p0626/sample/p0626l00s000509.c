#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX(a,b) (a > b ? a : b)
#define MIN(a,b) (a < b ? a : b)
const int inf = 1000000000; // 10^9

int main(){
   int d,n;scanf("%d %d",&d,&n);
   if(d==0)printf("%d",n);
   else if(d==1)printf("%d",n*100);
   else printf("%d",n*10000);
}
