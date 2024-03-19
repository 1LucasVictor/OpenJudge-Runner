#include <stdio.h>

int main () {
  char a[5];
  scanf("%s", a);

  if (a[0]==a[1] && a[1]==a[2] && a[2]==a[3]){
    printf("No\n");
  }
  else if (a[0]==a[1] && a[2]== a[3])
  {
    printf("Yes\n");
  }
  else if (a[0]==a[2] && a[1]== a[3])
  {
    printf("Yes\n");
  }
  else if (a[0]==a[3] && a[1]==a[2])
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}
