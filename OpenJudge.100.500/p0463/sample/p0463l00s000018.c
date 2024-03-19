#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);
  int one = N%10;
  if(one ==2||one==4||one==5||one==7||one==9) printf("hon");
  else if(one==0||one==1||one==6||one==8) printf("pon");
  else printf("bon");
  
	return 0;
}