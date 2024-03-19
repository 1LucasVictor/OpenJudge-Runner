#include<stdio.h>
void print_answer(int a,int b,int c,int d,int e,int f){
  double x,y;
  y=(c*d-f*a)/(b*d-e*a);
  x=(c-b*y)/a;
  printf("%5.3f ",x);
  printf("%5.3f\n",y);
}

int main(void){
  int n,a[2000],b[2000],c[2000],d[2000],e[2000],f[2000];
  int i=0,j;
  while(scanf("%d",&n)!=EOF){
      a[i]=n;
      scanf("%d",&n);
      b[i]=n;
      scanf("%d",&n);
      c[i]=n;
      scanf("%d",&n);
      d[i]=n;
      scanf("%d",&n);
      e[i]=n;
      scanf("%d",&n);
      f[i]=n;
      i++;
  }
  for(j=0;j<i;j++){
    print_answer(a[j],b[j],c[j],d[j],e[j],f[j]);
  }

  return(0);
}