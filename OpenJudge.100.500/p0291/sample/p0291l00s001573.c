#include <stdio.h>
#define N 200000

int main(){
  int n, num[N]={0};
  int i = 0, j, max, maxnum;
  
  scanf("%d", &n);
  
  while(i<n){
    scanf("%d", &num[i]);
    i++;
  }
  
  max = num[1] - num[0];
  maxnum= num[1];
    
  for(i = 2; i < n; i++){
    if(maxnum >= num[i]){
      continue;
    }
    for(j = 0; j < i; j++){
      if(max < num[i] - num[j]){
	max = num[i] - num[j];
      }
    }  
  }
  
  /*  
  max = num[1];
  min = num[0];
  for(i = 1; i < n; i++){
    if(max <= num[i]){
      max = num[i];
      
      for(j = 0; j < i; j++){
	if(min > num[j]){
	  min = num[j];
	}
	
      }
    }
  }
  */
  
  printf("%d\n", max);
  
  return 0;
}


