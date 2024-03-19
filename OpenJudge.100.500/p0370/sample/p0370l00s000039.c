#include <stdio.h>
#define DATA 10000

int main(){
  int a, b;
  int i, j;
  char str[DATA];
  int data_1[DATA];
  int data_2[DATA];
  int sum[DATA];

  for(i=0; i<DATA; i++){
    scanf("%d %c %d", &a, &str[i], &b);
    data_1[i] = a;
    data_2[i] = b;
    if(str[i] == '+'){
      sum[i] = data_1[i] + data_2[i];
    }
    else if(str[i] == '-'){
      sum[i] = data_1[i] - data_2[i];
    }
    else if(str[i] == '*'){
      sum[i] = data_1[i] * data_2[i];
    }
    else if(str[i] == '/'){
      sum[i] = data_1[i] / data_2[i];
    }
    else if(str[i] == '?'){
      break;
    }
  }

  for(j=0; j<i; j++){
    printf("%d\n", sum[j]);
  }
}

