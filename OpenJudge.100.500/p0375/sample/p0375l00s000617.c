#include<stdio.h>
int main()
{
  int i, x;

  scanf("%d" ,&x);

  for(i=1; i<=x; i++){
    
    if(i % 3 == 0){
      printf(" %d", i);
      continue;  
    }

    if(i % 10 == 3){
      printf(" %d", i);
      continue;
    }
    
  }
  
    printf("\n");

  return 0;
  
}