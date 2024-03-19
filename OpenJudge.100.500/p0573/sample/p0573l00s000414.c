#include<stdio.h>
int main(void){
  char s[4];
  scanf("%s",&s);
  int count=0;
  
  for(int i=0;i<4;i++){
    for(int j=i;j<4;j++){
      if(s[i]==s[j]){
        count++;
      }
    }
  }
  if(count==6){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}