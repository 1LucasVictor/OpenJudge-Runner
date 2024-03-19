#include<stdio.h>

int main(void){
  char str[4];
  int i;
  int count=0;
  scanf("%s",str);
   for(i=0;str[i]!='\0';i++){
     if(str[i]=='1'){
       count++;
     }
   }
  printf("%d",count);
  return 0;
}
