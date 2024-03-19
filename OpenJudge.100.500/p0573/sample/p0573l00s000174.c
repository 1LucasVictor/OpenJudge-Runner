#include<stdio.h>
int main(void){
char s[4];
  scanf("%s",&s);

	
      if(s[0]==s[1]){
		if(s[2]==s[3]&&s[0]!=s[2])
          printf("Yes");
        else printf("No");
        return 0;
      }
if(s[0]==s[2]){
if(s[1]==s[3]&&s[0]!=s[1])
          printf("Yes");
        else printf("No");
  return 0;
}
      if(s[0]==s[3]){
        if(s[1]==s[2]&&s[0]!=s[1])
          printf("Yes");
        else printf("No");
        return 0;
      }
      
      printf("No");
      return 0;

    }