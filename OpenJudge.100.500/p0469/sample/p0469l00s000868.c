#include <stdio.h>

int main(){
  int K,A,B;
  
  scanf("%d",&K);
  scanf("%d %d",&A,&B);

  if(B - B%K >= A){
    printf("OK\n");
  }
  else
    {
      printf("NG\n");
    }
  return 0;
}
