#include <stdio.h>

int main(void){

  char s[4];
  int i;
  int count = 0;

  scanf("%s", s);

  for(i = 0; i < 4; i++){
    if(s[0] == s[i]){
      count += 1;
    }
  }

  if(count == 2){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }


  return 0;
}
