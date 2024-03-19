#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX(X, Y) (((X) > (Y))? (X) : (Y))
#define MIN(X, Y) (((X) < (Y))? (X) : (Y))
int compare_int(const void *a, const void *b){
  return *(long int*)b - *(long int*)a; // 大きい順
}
int compare_int_small(const void *a, const void *b){
  return *(long int*)a - *(long int*)b; // 小さい順
}
// 公約数
long int gcd(long int a, long int b){
  if(b == 0){
    return a;
  }else{
    return gcd(b, a % b);
  }
}
// 最小公倍数 = a * b / 最大公約数
// 公倍数
long int lcm(long int a, long int b){
  return a * b / gcd(a, b);
}



// min
int main(void){
  char s[5];

  scanf("%s", s);
  
  if(s[0] == s[1] && s[2] == s[3]){
    printf("Yes\n");
  }else if(s[0] == s[2] && s[1] == s[3]){
    printf("Yes\n");
  }else if(s[0] == s[3] && s[1] == s[2]){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
}
