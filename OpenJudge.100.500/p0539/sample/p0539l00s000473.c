#include <stdio.h>

int main(){
  int N;
  scanf("%d",&N);
  for(int i=0;i<9;i++){
    if(N%(9-i)==0&&N/(9-i)<10){
      printf("Yes");
      break;
    }
    if(i==8) printf("No");
  }
  return 0;
}