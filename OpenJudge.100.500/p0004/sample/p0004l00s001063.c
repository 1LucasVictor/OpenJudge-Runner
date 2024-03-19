#include <stdio.h>

int main(void){
  unsigned long a_in,b_in,
                a = 0,b = 0,
                a_,b_;
  while(feof(stdin) == 0){
    scanf("%u %u\n",&a,&b);
    a_in = a;
    b_in = b;
    if(a < b){
      a_ = a;
      a = b;
      b = a_;
    }
    while(b != 0){
      b_ = a % b;
      a = b;
      b = b_;
    }
    printf("%u %u\n",a,(unsigned long long)a_in * (unsigned long long)b_in /a);
  }
  return 0;
}