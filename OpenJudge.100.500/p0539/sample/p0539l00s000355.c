#include <stdio.h>
int main(){
  int N;
  int count = 0;
  int S[10] ={2,3,4,5,6,7,8,9};
  scanf("%d",&N);
  if(N > 82)printf("No");
  for(int i = 0;i<8;i++){
    if(N%S[i] == 0 && N/S[i] <=9)count++;
  }
  if(count == 0)printf("No");
  else printf("Yes");
}