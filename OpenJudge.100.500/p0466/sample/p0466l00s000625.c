#include<stdio.h>
#include<math.h>

int main(){
  
  int i;
  char s[10],t[10];
  
  scanf("%s",s);
  scanf("%s",t);
  
  for(i = 0; s[i] != '\0'; i++){
    if(s[i] != t[i]){
      printf("No\n");
      return 0;
    }
  }
  
  printf("Yes\n");
  
  return 0;
        
}