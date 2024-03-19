#include <stdio.h>
#include <string.h>

int main()
{
  int i;
  int flag=0;
  char str[5];
  scanf("%s", str);
  i=0;
  for(i=1;i<4;i++){
    if(str[i]==str[i-1]) flag=1;
  }
  if(flag){
    printf("Bad\n");
  }else{
    printf("Good\n");
  }
}