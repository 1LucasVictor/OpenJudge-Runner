#include<stdio.h>
int main(void){
  char s[4];
  int i;
  int ct=0;
  
  for(i=1;i<=3;i++){
    scanf("%c",&s[i]);
  }
  
  for(i=1;i<=3;i++){
    if(s[i]=='1')ct++;
  }
  
  printf("%d\n",ct);
    
  return 0;  
}