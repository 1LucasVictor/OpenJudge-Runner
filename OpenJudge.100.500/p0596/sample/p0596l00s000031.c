#include<stdio.h>
int main(){
  char s[100000];
  scanf("%s",&s);
  int a = 0,b = 0;
  for(int i = 0;i < strlen(s);i++){
    if(s[i] == '0'){
      a++;
    }else{
      b++;
    }
  }
  if(a > b){
    b = a;
  }
  printf("%d",b * 2);
  return 0;
}