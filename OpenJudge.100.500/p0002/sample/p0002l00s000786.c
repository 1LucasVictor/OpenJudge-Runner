#include<stdio.h>
int main(void){
  int i,a,b,c,N,l;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
      l=b;
      b=a;
      a=l;
    }
    if(b>c){
      l=c;
      c=b;
      b=l;
    }
    if(c*c==(b*b+a*a))
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}