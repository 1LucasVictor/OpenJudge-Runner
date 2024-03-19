#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) (a > b) ? a : b
#define MIN(a,b) (a < b) ? a : b
const int inf = 1000000000; // 10^9

int main(){
   int a,b,c,d;scanf("%d%d%d%d",&a,&b,&c,&d);
   //printf("%d %d\n",MIN(b,d),MAX(a,c));
   int ac = MAX(a,c);
   int bd = MIN(b,d);
   printf("%d",bd-ac<0?0:bd-ac);
}