#include<stdio.h>


int main(void){
  int N,i,c;
  int a[2000090];

  scanf("%d\n",&N );
  for(i=0; i<N-1; i++){
    scanf("%d",&c );
    a[c]++;
  }
  for(i=1;i<=N;i++){
    printf("%d\n",a[i] );
  }
  return 0;
}