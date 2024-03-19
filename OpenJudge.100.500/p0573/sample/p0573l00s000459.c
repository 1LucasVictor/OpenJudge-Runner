#include <stdio.h>

int main(void){
 
  /* 文字列の入力 */
  //printf("文字列を入力してください。\n");
  char S[4];
  int ret;
  ret = scanf("%s", S);
  if (S[0]==S[1]){
    if (S[2]==S[3]){
      printf("Yes");
    }else{
      printf("No");
    }
  }else{
      if((S[0]==S[2])&&(S[1]==S[3])||(S[0]==S[3])&&(S[1]==S[2])){
	      printf("Yes");
      }else{
          printf("No");
      }
  }
  return 0;
}
