#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  
  char A[1010];
  int i,sum=0;
  while(1){
  scanf("%s\n",A);
    //printf("%s\n",A);
  if(A[0]=='0')break;
  for(i=0;i<strlen(A);i++){
  	sum += A[i]-'0';
  }
    printf("%d\n",sum);
    sum=0;
  
  }
  

  
  return 0;

  
}
