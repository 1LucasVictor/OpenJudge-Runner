#include <stdio.h>

int main(void){
  char c1,c2,c3,c4;
  scanf("%c %c %c %c",&c1,&c2,&c3,&c4);
  if(c1==c2){
    if(c1!=c3&&c3==c4)
      printf("Yes\n");
    else
      printf("No\n");
  }
  else if(c1==c3){
    if(c1!=c2&&c2==c4)
      printf("Yes\n");
    else
      printf("No\n");
  }
    else if(c1==c4){
    if(c1!=c2&&c2==c3)
      printf("Yes\n");
    else
      printf("No\n");
  }
  else
    printf("No\n");

  return 0;
}
