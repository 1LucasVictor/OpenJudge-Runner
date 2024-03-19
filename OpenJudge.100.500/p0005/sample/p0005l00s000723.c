#include<stdio.h>
#include<string.h>
main(){
  char str[22];
  int n;
  scanf("%s",str);
  n=strlen(str);
  for(n=n-1;n>=0;n--){
  printf("%c",str[n]);
  }
  printf("\n");
  return 0;
}