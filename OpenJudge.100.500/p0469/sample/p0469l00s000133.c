#include<stdio.h>
int main(void){
 int i,a,b;
   scanf("%d",&i);
  scanf("%d %d",&a,&b);
  if(b-a>i){puts("OK");}
  else if(b-b%i>a){ puts("OK");}
  else {puts("NG");}
  return 0; 
}
