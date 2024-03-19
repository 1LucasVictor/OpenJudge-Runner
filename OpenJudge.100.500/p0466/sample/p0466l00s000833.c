#include<stdio.h>
int main(void){
  char s[11];
  char t[12];
  int count=1;
  scanf("%s",s);
  scanf("%s",t);
  int i;
  for(i=0;s[i]!='\0';i++){
    if(s[i]!=t[i]){
    count=0;
    break;
    }
  }
  if(count==0){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}
