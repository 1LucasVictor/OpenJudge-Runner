#include <stdio.h>
#include <string.h> 
 
 
int main(void){
 
  int count=0;
  char s[200000];
  char t[200000];
  
 
  scanf("%s",s);
 
  scanf("%s",t);
  
  for(int i=0;i<strlen(s);i++){
  	if(s[i]!=t[i]){
    count++;
    }  
  }
  
  
  printf("%d",count);
    return 0;
 
}