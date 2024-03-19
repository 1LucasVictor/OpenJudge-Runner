#include <stdio.h>
#define NUM 1001

int main(void) {
  int j;
  int i=0,sum=0;
  int str[NUM];

  do{
    i++;
    scanf("%d",&str[i]);
  }while(str[i]!=0);
  for(j=1;j<i;j++){
    while(str[j]!=0){
      sum+=str[j]%10;
      str[j]/=10;
    }
    printf("%d\n",sum);
    sum=0;
  }

  return 0;
}