#include<stdio.h>
int main(){
      int a,b,c,m,n=0;
      scanf("%d",&m);
      a=m/100;
      b=m%100/10;
      c=m%100%10;
      if(a==1)
        n++;
      if(b==1)
        n++;
      if(c==1)
        n++;
      printf("%d",n);
      return 0;
      }
