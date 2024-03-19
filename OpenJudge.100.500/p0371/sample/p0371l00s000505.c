#include <stdio.h>

int main (){
  int n;
  int num;
  int i;
  int min = 1000001;
  int max = -1000001;
  int sum = 0;
  
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d",&num);
    sum += num;
    if(min > num){
      min = num;
    }
    else if(max < num){
      max = num;
    }
  }
  printf("%d %d %d\n",min,max,sum);
  return 0;
}

