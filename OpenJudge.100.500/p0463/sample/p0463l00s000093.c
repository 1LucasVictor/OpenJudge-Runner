#include<stdio.h>

int main (void){
  int n,k;
  scanf("%d\n",&n );
  k=n%10;

  if (k==2||k==4||k==5||k==7||k==9) {
    printf("hon" );
  }
  else if (k==0||k==1||k==6||k==8) {
    printf("pon" );
  }
  else if (k==3) {
    printf("bon" );
  }
}
