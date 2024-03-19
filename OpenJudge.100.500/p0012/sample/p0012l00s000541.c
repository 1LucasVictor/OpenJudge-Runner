#include <stdio.h>
#define N 100

int main(void){
  int in[N];
  int data;
  int icnt;
  int i;

  icnt=0;

  while(scanf("%d",&data) != EOF){
    if(!(data)){
      icnt--;
      printf("%d\n",in[icnt]);
    } else {
      in[icnt]=data;
      icnt++;
    }
  }

  return 0;
}