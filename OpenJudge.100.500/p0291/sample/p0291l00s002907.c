#include <stdio.h>

#define LIMIT 200000


int main(void) {
  /* code */
  int n;
  int i,j;
  int R[LIMIT];
  int max;
  int min;

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%d",&R[i]);
    if(i == 0) {
      min = R[i];
    }else {
      if(min > R[i]) min = R[i];
      if(i == 1){
        max = R[1] - R[0];
      }else if(R[i] != min){
        if(max < R[i] - min){
          max = R[i] - min;
        }
      }
    }
  }


  printf("%d\n", max);
  return 0;
}