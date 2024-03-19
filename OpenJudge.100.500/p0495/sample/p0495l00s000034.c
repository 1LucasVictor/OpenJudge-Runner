#include<stdio.h>
#include<string.h>

int main(){
  char str[3];
  scanf("%s",str);
  
  if(strcmp(str,"AAB")==0 || strcmp(str,"ABA")==0 || strcmp(str,"BAB")==0 || strcmp(str,"BBA")==0){
    printf("Yes");
  }else{
    printf("No");
  }}