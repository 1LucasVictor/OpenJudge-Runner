#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main(void){
  int i,j;
  int ii[100];
  int len,flg;
  scanf("%d",&len);
  for(i=0;i<len;i++){
    scanf("%d",&flg);
    if((flg %2)==0){
      if((flg %3)==0 || (flg %5)==0){
        ;
      }
      else{
          printf("DENIED");
          return 0;
      }
    }
  }
  		printf("APPROVED");
  return 0;

}
