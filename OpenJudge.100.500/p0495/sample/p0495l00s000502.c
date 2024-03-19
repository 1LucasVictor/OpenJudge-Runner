#include<stdio.h>

int main(void){
  char S[3];
  int aflag=0,bflag=0;
  int i;
  scanf("%s",S);
  for(i=0;i<3;i++){
    if(S[i]=='A') aflag++;
    else bflag++;
  }
  if(aflag>0&&bflag>0) printf("Yes\n");
  else printf("No\n");
}
