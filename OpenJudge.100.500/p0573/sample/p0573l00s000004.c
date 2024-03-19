#include <stdio.h>
#include <string.h>

int main(void){

  char s[5];
  scanf("%s", s);
  int count = 0;

  for(int i= 0; i<4;i++){
    for(int j=i+1;j<4;j++){
    	if(s[i]==s[j]){
          count=count+1;
        }
    }
  }
  if(count ==2) printf("Yes");
  else printf("No");
  
  return 0;
}

  