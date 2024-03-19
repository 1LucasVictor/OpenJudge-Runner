#include<stdio.h>
#include<stdlib.h>

int main(void){
  int a =0;
  scanf("%d\n",&a );
  for(int i =0;i<3;i++){
    if(a % 10 == 7){
      printf("Yes");
      exit(0);
    }
  }
  printf("No");
  return 0;
}