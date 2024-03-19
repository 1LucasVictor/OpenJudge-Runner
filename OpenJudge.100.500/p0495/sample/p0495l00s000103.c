#include <stdio.h>

int main(int argc, char const *argv[]) {
  int aa,j,b,c,d=0,i,n[100],k[30][30];
  char a[3];
  scanf("%s",a);
  if (a[0]==a[1]&&a[0]==a[2]) {
    printf("No");
    return 0;
  }
  printf("Yes");
  return 0;
}
