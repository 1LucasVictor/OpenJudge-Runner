#include <stdio.h>
  
int gcd(int x,int y){
  if(x<y){
    int tmp = x; y = x; x = y;
  }
  while(y>0){
    int r=x%y;
    x=y;
    y=r;
  }
  return x;
}
  
int main(){
  int x,y;
  scanf("%d",&x);
  scanf("%d",&y);
  printf("%d\n",gcd(x,y));
  
  return 0;
}
