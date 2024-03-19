#include<stdio.h>
#include <string.h>
int main(){
  int i,num,total=0;
  char number[1001];

  while(1){
    scanf("%s",number);
    if(number[0] == '0')break;

    for(i = 0; i<strlen(number);i++){
      num = number[i] - '0';
      total = total + num;
    }
    printf("%d\n",total);
    total = 0;
  }

  return 0;
}