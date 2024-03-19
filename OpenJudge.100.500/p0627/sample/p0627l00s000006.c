#include <stdio.h> 
int main(){
  int A,B;
  scanf("%d%d",&A,&B);
  int x,y,z;
  x = A + B;
  y = A - B;
  z = A * B;
  if(x >= y && x >= z){
  printf("%d\n",x);
  }else if(y >= z && y >= x){
  printf("%d\n",y);
  }else{
  printf("%d\n",z);
  }    
}