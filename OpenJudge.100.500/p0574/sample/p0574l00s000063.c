#include<stdio.h>
int main(){
  int i;
  char s[4];
  scanf("%s",s);
  for(i=0;i<3;i++){
    if(s[i]==s[i+1]){
      puts("Bad\n");
      return 0;}}
  puts("Good\n");
  return 0;}
