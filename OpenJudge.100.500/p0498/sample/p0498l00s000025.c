#include <stdio.h>
int main(void){
int i;
  scanf("%d",&i);
  
  if(i%2==0){
    i=i/2;
    printf("%d", i);
    return 0;
  }
  i=(i+1)/2;
      printf("%d", i);
    return 0;

	
}