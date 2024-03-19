#include<stdio.h>

int main(void) {
  int as, bs;
  int ae, be;
  int result = 0;

  scanf("%d%d%d%d",&as, &ae, &bs, &be);

  if(as <= bs && bs <= ae) {
    if(be <= ae) {
      result = be - bs;
    } else {
      result = ae - bs;
    }
  } else if(bs <= as && as <= be) {
    if(ae <= be) {
      result = ae - as;
    } else {
      result = be - as;
    }
  }

  printf("%d\n", result);

  return 0;
}