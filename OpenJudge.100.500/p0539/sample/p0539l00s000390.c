#include <stdio.h>

int main(void){
  int input;
  int flag = 0;
  scanf("%d",&input);
  if (input / 10 == 0){flag=1;goto end;}
  for(int div1=2;div1<10;div1++){
    for (int div2=div1;div2<10;div2++){
      if (div1*div2==input){
        flag = 1;
        goto end;
      }
    }
  }
end:
  if (flag == 1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
        