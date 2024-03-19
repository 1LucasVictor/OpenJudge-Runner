#include<stdio.h>

int main(void){
  char N[4];
  scanf("%s",N);
  if(N[2]=='7')
    printf("Yes");
  
  else if(N[1]=='7')
    printf("Yes");
  
  else if(N[0]=='7')
    printf("Yes");
  else 
    printf("No");
}
