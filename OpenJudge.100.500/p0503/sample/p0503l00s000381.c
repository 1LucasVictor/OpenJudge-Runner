#include<stdio.h>
 
int main(){
  int num, nums[200001];
  scanf("%d", &num);
  for(int i=0; i<num; i++){
    scanf("%d", &nums[i]);
  }
  
  for(int i=0; i<num-1; i++){
    int numsi = nums[i];
    for(int j=i+1; j<num; j++){
      if(numsi==nums[j]){
        printf("NO");
        return 0;
      }
    }
  }
  printf("YES");
  return 0;
}