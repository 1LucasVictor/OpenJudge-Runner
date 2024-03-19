//C Distinct or Not
#include<stdio.h>

int main(){
  int N,nums[200001];
  scanf("%d", &N);
  int i=0;
  while(scanf("%d", &nums[i])>0){
    for(int j=0; j!=i; j++){
      printf("a");
      if(nums[j]==nums[i]){
        printf("NO");
        return 0;
      }
      i++;
    }
  }
  printf("YES");
  return 0;
}
