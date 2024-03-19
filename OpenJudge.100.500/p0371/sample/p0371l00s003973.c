#include <stdio.h>
   
int main(void){
   
  int n;
  int a[10000];
  register int i;
  int min = 1000001,big = -1000001;
  long long int sum = 0;
   
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%d",&a[i]);
  } 
  for(i = 0;i < n;i++){
    if(min > a[i]){
      min = a[i];
    }
    if(big < a[i]){
      big = a[i];
    }
    sum += a[i];
  }
  printf("%d %d %d\n",min,big,sum);
  return 0;
}