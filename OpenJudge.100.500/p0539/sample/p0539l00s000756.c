#include<stdio.h>
int main(void){
  int a;
  int i,j;
  int chk = 0;
  scanf("%d", &a);
  for (i=1;i<=9;i++){
    for(j=1;j<=9;j++){
      if (i*j == a){
        chk = 1;
      }
    }
  }
  
  if (chk == 1){
    printf("Yes");
  }else{
    printf("No");
  }
  
  return 0;
}
