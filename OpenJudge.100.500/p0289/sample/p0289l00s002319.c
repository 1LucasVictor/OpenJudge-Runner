#include <stdio.h>

int gcd(int a,int b);
int main() {
  int x,y;

  scanf("%d%d",&x,&y);

  printf("%d\n", gcd(x,y));
  return 0;
}

int gcd(int a,int b){
  int r;
  if(a>b){
    r=a;
    a=b;
    b=r;
    r=0;
  }
  if(a < b){
      //  swap(a, b);
    while(b > 0){
        r = a % b;
        a = b;
        b = r;
    }
  }
    return a;
}

