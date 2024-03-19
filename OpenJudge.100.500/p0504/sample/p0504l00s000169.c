#include <stdio.h>

int main(void){
	int H,A;
  scanf("%d%d",&H,&A);
  int cnt=0;
  
  if(H>=1&&H<=10000&&A>=1&&A<=10000){
    while(H>0){
      H-=A;
      cnt++;
    }

    printf("%d\n",cnt);
  }
  
  return 0;
}