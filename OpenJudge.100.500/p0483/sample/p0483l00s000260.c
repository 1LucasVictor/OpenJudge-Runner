#include <stdio.h>

int main() {
  int N,result;
  scanf("%d",&N);
    for(int i=0;i<3;i++) {
      result = N%10;
      N = N/10;
      if(result==7) {
	printf("Yes");
	break;
      }
    }
    if(result!=7) {
      printf("No");
    }
  return 0;
}