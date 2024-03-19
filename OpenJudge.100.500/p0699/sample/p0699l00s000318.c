#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) (a > b) ? a : b
#define MIN(a,b) (a < b) ? a : b
const int inf = 1000000000; // 10^9

int main (){
   int a,b,c;scanf("%d %d %d",&a,&b,&c);
   if(((a == 5||a == 7) && (b == 5||b == 7) && (c == 5||c == 7))&&((a+b+c) == 17))printf("YES\n");
   else printf("NO\n");
}
