#include <stdio.h>

int main(void){
  int i,sum;
  char num[1001];

  for(;;){
    scanf("%s", &num);
    if(num[0] == '0') break;
    
    sum = 0;
    for(i=0;num[i]!='\0';i++)
      sum += num[i] - '0';
    printf("%d\n", sum);
  }
  
  return 0;
}
