#include<stdio.h>

int main(){
  char str[3];
  int i,count=0;

  scanf("%s",str);

  for(i=0;i<3;i++){
    if (str[i]=='1'){
             count++;
    }
  }
  printf("%d",count);

}
