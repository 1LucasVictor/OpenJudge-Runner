#include<stdio.h>

int main(){
  int x,y,z,a,b,c;

  scanf("%d%d",&x,&y);
  
  if(x > y) {
    a = x;
    b = y;
  }
  else{
    a = y;
    b = x;
  }

  c = a % b;
  while(c != 0){
  a = b;
  b = c;
  c = a % b;
  }
  z = b;
  
  printf("%d\n",z);

  return 0;
}
  

