#include <stdio.h>

int main(void)
{
   int a, b, keta;

   while(scanf("%d %d", &a, &b)!=EOF){
      a+=b;
      keta=1;
      while((a/=10)!=0) keta++;
      printf("%d\n", keta);
   }
}