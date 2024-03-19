#include <stdio.h>

int has7(int v);

int main(void) {
    int v, flg;
  
      scanf("%d", &v);
  
      flg = has7(v);
  
      if(flg) {
        printf("Yes\n");
    }else{
        printf("No\n");
    }
  
    return 0;
}

int has7(int v) {
      int i;
    for(i=0; i<3; i++) {
      if(v%10==7) {
          return 1;
      }
      v = v/10;
    }
  return 0;
}