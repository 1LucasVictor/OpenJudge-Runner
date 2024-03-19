#include <stdio.h>
int main(){
  int i,n;
  long max=0,min=0,sum=0;
  int num[10000];
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%d",&num[i]);
  }
  min=num[0];
  max=num[0];

  for(i = 0;i < n;i++){
    if(num[i] < min){
      min = num[i];
    }
    else if(num[i] > max){
      max = num[i];
    }
    sum += num[i];
  }

  printf("%ld %ld %ld\n",min,max,sum);

  return 0;
}