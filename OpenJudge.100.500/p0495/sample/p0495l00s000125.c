#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) (a > b) ? a : b
#define MIN(a,b) (a < b) ? a : b
const int inf = 1000000000; // 10^9

int main (){
   int s[4];scanf("%s",s);
   if(!strcmp(s,"AAA")||!strcmp(s,"BBB"))printf("No\n");
   else printf("Yes\n");
}