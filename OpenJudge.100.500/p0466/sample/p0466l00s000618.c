#include<stdio.h>

int main(){
  char s[20],t[20];
  scanf("%s",s);
  scanf("%s",t);
  
  for(int i=0;i<=15;i++){
    if(90<s[i]<200){s[i]='A';}
  }
  for(int i=0;i<=20;i++){
    if(s[i]=='A'){break;}
    if(s[i]!=t[i]){printf("No");return 0;}
  }
  printf("Yes");
  return 0;
}


