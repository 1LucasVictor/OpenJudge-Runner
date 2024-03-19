#include<stdio.h>

int main(void)
{
  int N,i,j,s;
  int hito[20000]={0};
  
  scanf("%d", &N);
  
  for(i=1;i<N;i++){
    scanf("%d", &s);
    hito[s-1]++;
  }
  
  for(j=0;j<N;j++){
    printf("%d\n",hito[j]);
  }
  
  return 0;
}