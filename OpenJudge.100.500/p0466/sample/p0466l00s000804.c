#include<stdio.h>
#include<string.h>

int main()
{
   char s[100];
   char t[100];
  
  scanf("%s",s);
  scanf("%s",t);
  
  if("%s" == "%s",s,t){
    printf("Yes");
  }else{
    printf("No");
  };
  
  return 0;
};

