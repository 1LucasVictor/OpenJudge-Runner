#include <stdio.h>
int main(void){
  int i=0;
  int s=0;
  char num[5];
  scanf("%s",num);
  while(num[i]){
    if(num[i]=='7') s=1;
    i++;
  }
  if(s==1) printf("Yes");
  else printf("No");
}