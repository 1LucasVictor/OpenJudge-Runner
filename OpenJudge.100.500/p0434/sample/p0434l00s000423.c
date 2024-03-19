#include<stdio.h>

int main(void){

  int tem;

  scanf("%d",& tem);

  if((-40<=tem)&&(tem<=40)){
    if(tem>=30){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  }else{
    printf("error\n");
  }

  return 0;
}
