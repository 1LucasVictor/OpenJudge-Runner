#include<stdio.h>
#include<string.h>
int main(){
  char a[20];
  int i;
  int num;
  scanf("%s",a);
  num = strlen(a);

  for (i = num-1;i >= 0;i--) {
    printf("%c",a[i]);
  }

    printf("\n");

  return 0;
}