#include <stdio.h>

int main()
{
   long int a,b,c;
   scanf("%ld %ld %ld",&a,&b,&c);
  if(a==7 && b==7  && ( c==5 || c==7))
  {
      printf("No");
  }else{
      if((a==5 && b==7 && c==7)||(a==5 && b==5 && c==5))
      {
           printf("No");
      }else{
      printf("YES");
  }}
    return 0;
}