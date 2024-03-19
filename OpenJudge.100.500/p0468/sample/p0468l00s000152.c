#include <stdio.h>
#include <string.h>
int main()
{
  char s[100];
int i;
  for(i=0;i<3;i++){
    scanf("%c",&s[i]);
  }

  if(s[1]=='B'){
    printf("ARC");
  }
  else if(s[1]=='R'){
    printf("ABC");
  }
return 0;
}
