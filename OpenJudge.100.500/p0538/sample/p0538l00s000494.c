#include<stdio.h>
int main ()
  {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a*b;
    if(0<a<10)
      { 
        if(0<b<10)
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
