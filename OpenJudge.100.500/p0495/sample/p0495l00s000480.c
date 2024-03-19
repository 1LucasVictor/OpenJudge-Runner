#include<stdio.h>

int main(void){
  char a[3];
  scanf("%s",a);
  if(a[0]==a[1] && a[1]==a[2])
    printf("No");
  else{
    printf("Yes");
  }
}