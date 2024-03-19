#include <stdio.h>
#include <stdlib.h>
struct _p{
  char n[11];
  int  t;
} p[100000];
int main(){
  int N,M,n,Q,t;
  scanf("%d %d\n",&N,&Q);
  for(n=0;n<N;n++)
    scanf("%s %d\n",p[n].n,&p[n].t);
  n=0;t=0;M=N;
  while(N>0){
    if(p[n].t>Q){
      t+=Q;
      p[n].t-=Q;
    }
    else if(p[n].t){
      t+=p[n].t;
      p[n].t=0;N--;
      printf("%s %d\n",p[n].n, t);
    }
    if(n==M)n=0;
    else n++;
  }
  return 0;
}