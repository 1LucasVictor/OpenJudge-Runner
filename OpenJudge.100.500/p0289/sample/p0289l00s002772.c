#include <stdio.h>
int gcd(int,int);
int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  printf("%d\n",gcd(x,y));
  return 0;
}
int gcd(int x,int y){
  int i,k;
  if(x>y){
    i=x%y;
    while(i!=0){
      x = y;
      y = i;
      i = x%y;
      k = y;
    }
  }
  else if(x<y){
    i=y%x;
    while(i!=0){
      y = x;
      x = i;
      i = y%x;
      k = x;
    }
  }
  else if(x==y){
    k=x;
  }
  return k;
}
  

    

    
