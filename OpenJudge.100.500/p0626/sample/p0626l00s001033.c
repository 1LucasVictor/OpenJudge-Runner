#include <stdio.h>
#include <string.h>

int main(void)
{
  int a;
  int b;
 

  scanf("%d %d",&a,&b);

   int c = a * 100;
  int d = 0;

if(a != 0){
    d = c*b;
}else{
    d = b;
}
printf("%d\n",d);
   return 0;
}