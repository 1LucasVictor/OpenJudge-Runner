#include<stdio.h>
int main()
{
  char S[4];
  scanf("%s",S);
  if((S[0]==S[1]||S[0]==S[2]||S[0]==S[3])&&(S[1]==S[0]||S[1]==S[2]||S[1]==S[3])){
    printf("Yes\n");

  }else{
      printf("No\n");



  }
  return 0;


}
