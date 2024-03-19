#include <stdio.h>
#include <string.h>

int main(void){

  char S[100000];
  int count0=0;
  int count1=0;
  
  scanf("%s",S);
  int len = strlen(S);
  
  for(int i=0;i<len;i++){
  	if(S[i]=='0')count0++;
    if(S[i]=='1')count1++;
  }
  
  if(count1<=count0)printf("%d",count0*2);
  else{
    printf("%d",count1*2);
  }
  
  return 0;
}