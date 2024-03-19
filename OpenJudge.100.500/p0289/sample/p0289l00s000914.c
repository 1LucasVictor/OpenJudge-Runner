#include <stdio.h>
 
int gcd(int x,int y){
  if(x<y){
    int a;
    a = y;y = x; x = a; 
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
  scanf("%d%d",&x,&y);
  printf("%d\n",gcd(x,y));
 
  return 0;
}
