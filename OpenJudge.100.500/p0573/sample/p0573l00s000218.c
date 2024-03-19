#include <stdio.h>

int main()
{
  char str[5];
  scanf("%s", str);
  if(str[0]==str[1] && str[2]==str[3] && str[0]!=str[2]){
    printf("Yes\n");
  }else if(str[0]==str[2] && str[1]==str[3] && str[0]!=str[1]){
    printf("Yes\n");
  }else if(str[0]==str[3] && str[1]==str[2] && str[0]!=str[1]){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}