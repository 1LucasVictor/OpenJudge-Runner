#include<stdio.h>
int gcd(int, int);
int main(){

  int x,y,i,a=0;
  scanf("%d %d",&x,&y);
 a= gcd(x,y);

 printf("%d\n",a);
  return 0;
}
int gcd(int x,int y){
  int a,b,c,r;
  if(x<y){a=x;
  b=y;
  x=b;
  y=a;
  }

  while(y>0){
    r=x%y;
    x=y;
    y=r;
  }
  if(y!=0) return gcd(x,y);
  else  return x;
}

