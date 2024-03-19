#include <stdio.h>
#define N 100

int main(void){
  int in[N],out[N];
  int data;
  int icnt,ocnt;
  int i;

  icnt=ocnt=0;

  while(1){
    scanf("%d",&data);
    if(!(data)){
      icnt--;
      out[ocnt]=in[icnt];
      in[icnt]=0;
      ocnt++;
    } else {
      in[icnt]=data;
      icnt++;
    }
    if(!(icnt))break;
  }

  for(i=0;i<ocnt;i++){
    printf("%d\n",out[i]);
  }

  return 0;
}