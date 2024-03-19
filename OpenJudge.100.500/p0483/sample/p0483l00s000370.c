#include <stdio.h>

int main() {
  int N;
  scanf("%d",&N);
  if(N>=100 && N<=999) {
    for(int i=0;i<3;i++) {
      N = N%10;
      if(N==7) {
	printf("Yes");
	break;
      }
    }
    if(N!=7) {
      printf("No");
    }
  }
  return 0;
}