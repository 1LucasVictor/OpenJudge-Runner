//C Distinct or Not
#include<stdio.h>

int main(){

  int N;
  int nums[200001];
  
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d" ,&nums[i]);
    for(int j=0; j!=i; j++){
      if(nums[j]==nums[i]){
        printf("NO");
        return 0;
      }
    }
  }
  
  printf("YES");
  
  return 0;
}
