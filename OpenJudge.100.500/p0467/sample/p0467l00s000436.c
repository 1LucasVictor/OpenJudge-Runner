#include <stdio.h>

int main(){
  int a, b, c, k, d;
  scanf("%d %d %d %d", &a, &b, &c, &k);
d = 2*a+b-k;
  if(k<a){
    printf("%d", k);
  }else if(k<a+b){
    printf("%d", a);
  }else{
    printf("%d", d);
  }
}