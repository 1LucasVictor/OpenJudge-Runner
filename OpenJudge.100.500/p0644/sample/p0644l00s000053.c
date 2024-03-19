#include<stdio.h>
int main(){
  char s[3],j=0;
  scanf("%s",s);
  for(int i=0;i<3;i++){
    if(s[i]=='1')
      j++;
  }
  printf("%d\n",j);
  return 0;
}