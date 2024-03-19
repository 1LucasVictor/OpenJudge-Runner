/* ええ加減、これもACしたい */
#include <stdio.h>

#define N 1000000
#define M 1000

int main(){
  int a,b,c;
  int tbl[N];
  for(a=1;a<N;a++) tbl[a]=-1;
  for(a=2;a<=M;a++) if(tbl[a]) for(b=2;a*b<=N;b++) tbl[a*b]=0;

  while(scanf("%d",&a)!=EOF){
    b=0;
    for(c=2;c<=a;c++) b-=tbl[c];
    printf("%d\n",b);
  }
  return 0;
}