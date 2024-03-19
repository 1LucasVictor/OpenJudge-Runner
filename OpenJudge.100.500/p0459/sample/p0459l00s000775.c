#include <stdio.h>

int main(void)
{

  int x[2];


  scanf("%d", &x[0]);
  scanf("%d", &x[1]);

  int sum = 0;
  int i = 0;
  int flag = 0;

  for(i =0;i<=x[0]; i++ ){
    sum = (x[0]-i)*2 + i*4;

    if(sum==x[1]){
      flag = 1;
      break;
    }

  }

  if(flag){
    printf("Yes");
  }
  else{
    printf("No");
  }

  return 0;
}
