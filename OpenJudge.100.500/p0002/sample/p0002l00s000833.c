#include <stdio.h>

int main()
{
 int a, b, c, max, add, n, i;

 scanf("%d", &n);

 for(i=0; i<n; i++){
  scanf("%d%d%d", &a, &b, &c);
  add=a*a + b*b + c*c;
  if(a>b){
   if(a>c){
    add -= a*a;
    max = a*a;
   }else{
    add -= c*c;
    max = c*c;
   }
  }else{
   if(b>c){
    add -= b*b;
    max = b*b;
   }else{
    add -= c*c;
    max = c*c;
   }
  }
  printf("%s\n", (add==max)?"YES":"NO");
 }
 return(0);
}
  