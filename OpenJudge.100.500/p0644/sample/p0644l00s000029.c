#include<stdio.h>
int main(void){
  int sum=0;
  char s[4]={'\0'};
  scanf("%s",s);
  for(int i=0;i<3;i++){
    if(s[i]=='1'){
      sum++;
    }
  }
  printf("%d\n",sum);
  return 0;
}