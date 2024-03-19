#include <stdio.h>

int main(){
  char S[5];
  int badflag = 0;
  scanf("%s",S);

  for(int i=0;i<3;i++)
    if(S[i]==S[i+1])
      badflag++;

  if(badflag)
    printf("Bad\n");
  else
    printf("Good\n");

  
  return 0;
}
