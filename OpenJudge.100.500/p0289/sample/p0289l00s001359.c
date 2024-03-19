#include<stdio.h>
#include<stdlib.h>

int gcd(int , int );

int main(){
  int a,b,c;
 
  scanf("%d%d",&a,&b);
  if(b > a){
    c = a; 
    a = b; 
    b = c;
  }
  if(b != 0){
    c = gcd(a,b);
  }
  printf("%d\n",c);
  return 0;
}

int gcd(int a, int b)
{
  if(b == 0){
    return a;
  }
  else{
    return gcd(b,a%b);
  }
}