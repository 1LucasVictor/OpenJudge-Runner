#include<stdio.h>
int main(){
  int i = 0;
  int a, b;
  int s, t, r;
  scanf("%d%d",&a,&b);
  while( i < a && i < b){
    i = i + 1;
    s = a % i;
    t = b % i;
    if( s == 0 && t == 0 && r < i){
      r = i;
    }
  }
  printf("%d\n",r);
  return 0;
}