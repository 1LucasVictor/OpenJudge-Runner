#include <stdio.h>
#include <math.h>

void three_sort(int *a, int *b, int *c){
  int x;
  if(*a > *c){
    if(*b < *c){
      x = *a;
      *c = *a;
      *a = x;
    }
  }else{
    if(*b > *c){
      x = *b;
      *b = *c;
      *c = x;
    }
  }
}
int main(){
  int a, b, c;
  int cnt, i;

  scanf("%d", &cnt);

  for(i = 0; i < cnt; i++){
    scanf("%d %d %d", &a, &b, &c);
    three_sort(&a, &b, &c);
    if(pow(c, 2) == pow(a, 2) + pow(b, 2)){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}