#include<stdio.h>
int gcd(int,int);

int main(){
  int x,y;
  int n;
  scanf("%d %d",&x,&y);
  printf("%d\n",n=gcd(x,y));
  return 0;
}

int gcd(int a,int b){
  int n;
  if(a<b){
    n=a;
    a=b;
    b=n;
  }
  while(b>0){
    n = a % b;
    a = b;
    b = n;
  }
  return a;
}
