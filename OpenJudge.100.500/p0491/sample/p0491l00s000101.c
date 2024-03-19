#include<stdio.h>
 
int main(void)
{
  int N, K;
  int kouho1, kouho2;
  int answer;
  
  scanf("%d %d", &N, &K);
  
  if(N > K && K != 1) {
    kouho1 = N % K;
    kouho2 = K - (N % K);
    if(kouho1 > kouho2) {
      answer = kouho2;
    }else {
      answer = kouho1;
    }
  }else if(K > N && K != 1) {
    kouho1 = N;
    kouho2 = K - N;
    if(kouho1 > kouho2) {
      answer = kouho2;
    }else {
      answer = kouho1;
    }
  }else if(N == K || K == 1) {
    answer = 0;
  }
  
  printf("%d", answer);
  
  return 0;
}