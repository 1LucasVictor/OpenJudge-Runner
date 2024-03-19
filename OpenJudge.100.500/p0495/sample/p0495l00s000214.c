#include<stdio.h>
#include<string.h>
int main(void){
  char s[4], a[]="AAA", b[]="BBB";
  int i;
  scanf("%s",s);
  if(strcmp(s,a)==0 ||strcmp(s,b)==0){
    printf("No\n");
    return 0;
  }
  printf("Yes\n");
  return 0;
}
