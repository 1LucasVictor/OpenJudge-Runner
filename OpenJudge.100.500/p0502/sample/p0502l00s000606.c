#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  int *list;
  int flag = 1;
  scanf("%d", &n);
  list =(int *) malloc(sizeof(int)*n);
  for (int i = 0; i < n; i++){
    scanf("%d", &list[i]);
  }
  for (int i = 0; i < n; i++){
    if (list[i]%2 == 0){
      int cnt = 0;
      if (list[i]%3 == 0 || list[i]%5 == 0){
        cnt += 1;
      }
      if (cnt == 0){
        flag = 0;
        break;
      }
    }
  }
  if (flag == 0){
    printf("DENIED\n");
  }else{
    printf("APPROVED\n");
  }
  free(list);
  return 0;
}