#include <stdio.h>
int main(){
  int a,b,c,k;

  scanf("%d%d",&a,&b);

  if(a<b){
    c=a;
    a=b;
    b=c;
  }
  
  while(b>0){
    k=a%b;
    a=b;
    b=k;
    }
  

  printf("%d\n",a);

  return 0;
}