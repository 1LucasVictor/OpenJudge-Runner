#include <stdio.h>
int main(){
int a,b,c,d;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&d);
c=a-b;

  if(  c>d ) {
    printf("0");
  }
  if(  c< d ) {
   printf("%d",d-c);
  
  }
  
  
return 0;
}