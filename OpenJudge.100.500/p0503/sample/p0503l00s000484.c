//C Distinct or Not
#include<stdio.h>

int main(){

  int N;
  int nums[200001];
  
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d" ,&nums[i]);
  }
  
  for(int i=0; i<N-1; i++){
    for(int j=i+1; j<N; j++){
      if(nums[i]==nums[j]){
        printf("NO");
        return 0;
      }
    }
  }
  printf("YES");
  
  return 0;
}
