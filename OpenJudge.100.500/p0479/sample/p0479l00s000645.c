#include<stdio.h>

int main(void){
  int N;
  scanf("%d",&N);
  int A[200010];
  for(int i = 2;i <= N;i++){
    scanf("%d",&A[i]);
  }

  int count[200010];

  for(int i = 1;i <= N;i++){
    count[i] = 0;
  }

  for(int i = 1;i <= N;i++){
    for(int j = 2;j <= N;j++){
      if(A[j] == i){
        count[i] += 1;
      }
    }
    printf("%d\n",count[i]);
  }

  return 0;
}
