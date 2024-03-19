#include<stdio.h>
int main()
{
    int i; 
    char s[4];
    // 文字列の入力
    
  scanf("%s", s);
  
  if((s[0]=='A')&&(s[1]=='A')&&(s[2]=='A'))
    printf("No");
    
    
  else if((s[0]=='B')&&(s[1]=='B')&&(s[2]=='B'))
    printf("No");

  else 
    printf("Yes");
    
    return 0;
}
