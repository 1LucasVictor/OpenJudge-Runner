#include<stdio.h>

int GCD(int, int);

main(){
  int a, b, gcd, lcm;

  while(scanf("%d %d", &a, &b) != EOF){
    gcd = GCD(a, b);
    lcm = a * (b / gcd);
    printf("%d %d\n", gcd, lcm);
  }

  return 0;
}

int GCD(int a, int b){
  int c, d;

  if(b > a){
    c = a;
    a = b;
    b = c;
  }
  d = b;

  while(1){
    c = a % b;
    if(c == 0){
      break;
    }else{
      d = c;
      a = b;
      b = c;
    }
  }
  return d;
}