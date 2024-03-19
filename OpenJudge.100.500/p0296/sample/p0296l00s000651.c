#include <stdio.h>

#define N 200

int main(){

  int i;
  int count = 0, n = 0;
  char in[N];
  int ans[N];
  int out = 0;

  i = 0;
  while(1){

    scanf("%c", &in[i]);
    if(in[i] == '\n') break;
    else if(in[i] != ' '){
      count++;
      i++;
    }

  }

  for(i = 0; i < count; i++){
    if(in[i] == '+'){
      ans[n] = ((int)in[i - 2] + in[i - 1]) - 96;
      n++;
    }

    else if(in[i] == '-'){
      ans[n] = ((int)in[i - 2] - in[i - 1]);
      n++;
    }

    else if(in[i] == '*'){
      out += ans[n] * ans[n - 1];
      n -= 2;
    }
    
  }
  
  if(n == 1) out = ans[0];

  printf("%d\n", out);

  return 0;
}