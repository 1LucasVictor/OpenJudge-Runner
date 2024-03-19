#include<stdio.h>

int main(){
  int i, cntm = 0, a;
  char ch[1200];

  for(i=0;;i++){
    scanf("%c", &ch[i]);

    if(ch[i] == '\n') break;

    cntm++;

    a = ch[i];
    if(a >= 65 && a <= 90){
      ch[i] += 32; //omoji -> komoji
    }

    if(a >= 97 && a <= 122){
      ch[i] -= 32; //komoji -> omoji
    }
  
  }
  
  for(i=0;i<cntm;i++){
    printf("%c", ch[i]);
  }
  printf("\n");

  return 0;
}
