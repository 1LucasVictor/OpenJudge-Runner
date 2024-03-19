#include <stdio.h>
#include <string.h>

int main(void){

  char number[1001];
  int i;
  int s;
  int len;
  while(1){
    for(i=0;i<1001;i++){
      number[i] = '0';
    }

    scanf("%s", number);
   if(*number == '0'){break;}
   else {
     s = 0;
     len = strlen(number);
     for(i=0;i<len;i++){
     s = s + number[i] - '0';
     }
   printf("%d\n", s);
   }
  }

  return 0;
}