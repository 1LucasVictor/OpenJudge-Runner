#include <stdio.h>

int main(){
  int n,j,h;
  scanf("%d",&n);
  h=n/100*100;
  j=n/10*10-h;
    if(n-h-j==3){
    printf("bon\n");
  }else if(n-h-j==0||n-h-j==1||n-h-j==6||n-h-j==8){
    printf("pon\n");
  }else{
    printf("hon\n");
  }

  return 0;
}
