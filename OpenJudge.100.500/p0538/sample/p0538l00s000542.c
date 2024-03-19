#include<stdio.h>
int main ()
  {
    int a,b,c;
    scanf("%d\t%d",&a,&b);
    c=a*b;
    if(1<=a<=9)
      { 
        if(1<=b<=9)
      { 
      printf("%d",c);
      }
    else
      { 
        printf("-1");
      }
      }
  else
    printf("-1");
  return 0;
  }
