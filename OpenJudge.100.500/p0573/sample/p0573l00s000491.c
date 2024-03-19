#include<stdio.h>
#include<string.h>

int main(void){
  char s[10];
  int i,j,count;
  scanf("%s",s);
  for(i=0;i<strlen(s);i++){
    count = 0;
    for(j=0;j<strlen(s);j++){
      if(s[i]==s[j]) count++;
    }
    if(count!=2){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}