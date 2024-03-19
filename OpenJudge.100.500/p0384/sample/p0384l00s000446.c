#include<stdio.h>
#define N 1200

int main(){
  char str[1200];
  int i;
  int count=0;
  
  for(i=0; i<N;i++){
    scanf("%c",&str[i]);
    if(str[i]=='\n'){
      break;
    }
    count++;
  }
  
  for(i=0;i<count;i++){
    if('a'<=str[i] && str[i] <='z'){
      str[i]=str[i]+('A'-'a');  
    }else if('A'<=str[i] && str[i] <='Z'){
      str[i]=str[i]+('a'-'A');
    }
  }
    
  for(i=0;i<count;i++){
    printf("%c",str[i]);  
  }
  printf("\n");
  
  return 0;
}