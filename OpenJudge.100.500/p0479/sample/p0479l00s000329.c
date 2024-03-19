#include<stdio.h>
 
int main(){
  int i, input;
  int sum;
  int num[200000] = {0};
  
  scanf("%d", &sum);
  for(i=0; i < sum-1; i++){
    scanf("%d", &input);
    num[input]++;
  }
  for(i=1; i <= sum; i++){
    printf("%d\n", num[i]);
  }
  
  return 0;
}
