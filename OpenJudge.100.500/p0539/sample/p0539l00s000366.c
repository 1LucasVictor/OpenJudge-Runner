#include <stdio.h>

int main(void)
{
 int n;
 int a,b,c,i;

 scanf("%d",&n);

 for(a=1;a<=9;a++){
  for(b=1;b<=9;b++){
   if(a*b==n){
      printf("Yes\n");
     return 0;
    }
   }
  }
 printf("No\n");

 return 0;
}
