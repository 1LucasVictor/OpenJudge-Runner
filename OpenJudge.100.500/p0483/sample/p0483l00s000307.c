#include <stdio.h>
#include <stdlib.h>

int main(void){
  int N;
  int count=0;
  int a[3];
  
  if(scanf("%d",&N) != 1){
    printf("*****SCANF ERROR****\n");
    exit(1);
  }
  a[0]=N%10;
  N=N/10;
  a[1]=N%10;
  N=N/10;
  a[2]=N;
  
  for(int i=0;i<3;i++){    
    if((a[i]%7 == 0) && (a[i] != 0)){
      count++;
    }
  }
  
  if(count != 0){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  
  return 0;
}