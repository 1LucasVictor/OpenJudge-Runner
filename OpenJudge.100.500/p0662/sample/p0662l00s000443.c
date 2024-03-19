#include<stdio.h>

int main(){
  int as = 0;
  int ae = 0;
  int bs = 0;
  int be = 0;

  scanf("%d %d %d %d", &as, &ae, &bs, &be);
  if(as - bs >=0){
    if(be - as <= 0){
      printf("0\n");
    }else if(be - as > 0 && ae - be > 0){
      printf("%d\n", be - as);
    }else if(be - as > 0 && ae - be <= 0){
      printf("%d\n", ae - as);
    }
  } else{
    if(ae - bs <= 0){
      printf("0\n");
    }else if(ae - bs > 0 && be - ae > 0){
      printf("%d\n", ae - bs);
    }else if(ae - bs > 0 && be - ae <= 0){
      printf("%d\n", be - bs);
    }
  }

  return 0;
}
