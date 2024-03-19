#include <stdio.h>

int main(void){

  char s[4];
  int i, k;
  int count_2 = 0;

  scanf("%s", s);

  for(i = 0; i < 4; i++){
    for(k = i; k < 4; k++){
      if(s[i] == s[k]){
        count_2 += 1;
      }
    }
  }

  if(count_2 == 6){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }


  return 0;
}
