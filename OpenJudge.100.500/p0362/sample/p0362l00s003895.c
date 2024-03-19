#include <stdio.h>

int main(void){
 int a;
 int b;
 int c;

 scanf("%d %d %d", &a, &b, &c);

 if(a < b < c || (a == b && a < c) || (b == c && a < b)) printf("Yes\n");

 else printf("No\n");

 return 0;
}