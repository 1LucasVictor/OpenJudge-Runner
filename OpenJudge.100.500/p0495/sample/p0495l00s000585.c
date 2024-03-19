#include<stdio.h>

int main(){
  char s[4];
  int a=0,b=0;
  int i;
  scanf("%s",s);

  for(i=0;i<3;i++){
    if(s[i]=='A')
      a++;
    else
      b++;
  }
  if(a>0 && b>0)
    printf("Yes");
  else
    printf("No");
}