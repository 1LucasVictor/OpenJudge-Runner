#include <stdio.h>

int main() {
  int a,b,c,t;
  scanf("%d %d %d\n",&a,&b,&c);

 if (b>c) 
 {
   t=b;
   b=c;
   c=t;
 }
 if (a>b) 
 {
   t=a;
   a=b;
   b=t;
 }
 printf("%d %d %d\n",a,b,c );
  
  return 0;
}
