#include <stdio.h>
#define N 200000

int main(){
  int n, num[N]={0};
  int i = 0, j, max, min;
  
  scanf("%d", &n);
  
  while(i<n){
    scanf("%d", &num[i]);
    i++;
  }
  
  max = num[1];
  min = num[0];
  
  for(i = 1; i < n-1; i++){
    if(max < num[i+1]){
      max = num[i+1];
      
      for(j = 0; j < i; j++){
	if(min > num[j]){
	  min = num[j];
	}
      }
      
    }
  }
  
  printf("%d\n", max-min);
  
  return 0;
}


