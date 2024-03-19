#include <stdio.h>

int main(){
   int a,h;
   scanf("%d %d",&h,&a);
   if(h%a > 0)
      printf("%d\n",(h/a)+1);
   else
      printf("%d\n",h/a);
}
