#include <stdio.h>

int main(void){
  long int a,b,_a,_b,i;
  long int x,y;
  while(scanf("%ld %ld",&a,&b) != EOF){
    _a = a;
    _b = b;
    x = 1;
    y = 1;
    for(i=2;i<(a/2)&&i<(b/2);i++){
      while(_a%i==0 && _b%i==0){
        _a /= i;
        _b /= i;
        x *= i;
      }
    }
    y = a * b / x;
    printf("%ld %ld\n",x,y);
    }
    return 0;
}