#include<stdio.h>
int main(){
  char s[3];
  int i,sum=0;
  scanf("%s",s);
  for(i=0;i<3;i++){
    if(s[i]=='1'){sum++;}
  }
  printf("%d\n",sum);
}