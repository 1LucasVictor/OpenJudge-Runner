#include <stdio.h>

int main(){

  int a,b,tmp,r;
  
  scanf("%d%d",&a,&b);
  
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
  
  while(b>0){
    r = a%b;
    a = b;
    b = r;
  }
  
  printf("%d\n",a);

}