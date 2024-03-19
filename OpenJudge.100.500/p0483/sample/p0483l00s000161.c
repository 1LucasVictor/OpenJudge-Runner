#include <stdio.h>

int main (){
  int N;
  scanf("%d",&N);
  while(N > 0){
	if(7 == N%10){
      printf("Yes");
      return 0;
    }
    N = N/10;
  }
  printf("No");
  return 0;
}
