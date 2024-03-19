#include <stdio.h>

int min(int m, int n){
  return ( (m < n) ? m : n);
}

int gcd(int m,int n){
  int i;
  for(i = min(m,n); i >= 1; i--){
    if(!(m % i || n % i)){return i;}
  }
}

int main(void){
  int m = 0;
  int n = 0;
  int g;
  while(1){
    if(scanf("%d%d",&m,&n) == EOF){break;};
    g = gcd(m,n);
    printf("%d %d\n",g,m/g*n);
  }
  return 0;
}