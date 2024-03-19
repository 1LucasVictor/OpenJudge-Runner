#include<stdio.h>
#include<string.h>
main(){
  int i,l;
  char a[20];
  scanf("%s",a);
  l=strlen(a);
  for(i=l-1;i>=0;i--){
    printf("%c",a[i]);
  }
  printf("\n");
  return 0;
}