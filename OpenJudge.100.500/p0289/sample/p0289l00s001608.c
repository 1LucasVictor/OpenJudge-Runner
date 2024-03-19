#include <stdio.h>

int main(){
  int a,b,p;
  int r;

  scanf("%d %d",&a,&b);

  if(a<b){
    p=a;
    a=b;
    b=p;
  }
  
  r=a%b;
  while(r!=0){
    a=b;
    b=r;
    r=a%b;
    if(r==0)printf("%d\n",b);
  }
  return 0;
}

