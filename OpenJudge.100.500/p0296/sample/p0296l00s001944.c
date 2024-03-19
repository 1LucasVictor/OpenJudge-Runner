#include <stdio.h>

int main(){
  int j=0, flag=0, Ans[100];
  char fx;
  while(1){
    scanf("%c",&fx);
    if(fx == '\n') break;
    if(fx >= '0' && fx <= '9'){
      if(flag)
	Ans[j] = Ans[j-1] * 10 + (fx-48);
      else Ans[j] = fx - 48;
      flag = 1;
    }
    else if(fx == '+'){
      Ans[j-2] += Ans[j-1];
      flag = 0;
      j--;
    }
    else if(fx == '-'){
      Ans[j-2] -= Ans[j-1];
      flag = 0;
      j--;
    }
    else if(fx == '*'){
      Ans[j-2] *= Ans[j-1];
      flag = 0;
      j--;
    }
    else if(fx == ' ' && flag){
      j++;
      flag = 0;
    }
    else continue;
  }
    printf("%d\n",Ans[0]);
}