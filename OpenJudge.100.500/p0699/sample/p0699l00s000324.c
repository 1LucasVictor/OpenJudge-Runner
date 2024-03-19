#include<stdio.h>

int main(void){
  int x[3];

  for(int i = 0;i < 3;i++){
    scanf("%d",&x[i]);
  }

  if(x[0]*x[1]*x[2] == 175){
    printf("YES");
  }else{
    printf("NO");
  }

  return 0;
}
