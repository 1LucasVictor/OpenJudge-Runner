#include "stdio.h"

int main(void) {
  /* code */
  int h,n;
  scanf("%d %d", &h, &n);
  /*int a[100001]={0};
  for (int i = 0; i < n; i++) {
    scanf("%d",&a[i]);
    
  } */
  int a;
  for (int j = 0; j < n; j++) {
    a = 0;
    scanf("%d\n", &a);
    h -= a;
      /* code */
  }
  if(h <= 0){
    printf("%s\n","Yes");
  }else{
    printf("%s\n","No" );
  }
  return 0;
}