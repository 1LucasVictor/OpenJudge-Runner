#include <stdio.h>

int main(){
  int i, num;
  int cnt=0, cnu=0;
  int op[100];
  int cul[100];
  char sym[200];

  for(i=0;i<200;i++){
    scanf("%c", &sym[i]);
    if(sym[i]=='\n'){
      num=i;
      break;
    }
  }

  for(i=0;i<num;i++){
    if(sym[i]>'0' && sym[i]<'9'){
      op[cnu]=sym[i]-'0';
      cnu++;
    }
    else if(sym[i]=='+' && i>1){
      cul[cnt]=op[cnu-2]+op[cnu-1];
      cnt++;
    }
    else if(sym[i]=='-' && i>1){
      cul[cnt]=op[cnu-2]-op[cnu-1];
      cnt++;
    }
    else if(sym[i]=='*' && cnt>1){
      cul[cnt]=cul[cnt-2]*cul[cnt-1];
      cnt++;
    }
    else;
  }

  printf("%d\n", cul[cnt-1]);
}