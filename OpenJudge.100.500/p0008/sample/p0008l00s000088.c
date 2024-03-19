#include<stdio.h>
#define M 1000000
int main(){
  char p[M]={1,1};
  int c[M]={0};
  int i,j,cc,n;
  for(i=2;i*i<M;i++){
    if(p[i])continue;
    for(j=i*i;j<M;j+=i)p[j]=1;
  }
  for(i=cc=0;i<M;i++){
    cc+=1-p[i];
    c[i]=cc;
  }
  while(scanf("%d",&n)!=EOF)printf("%d\n",c[n]);
  return 0;
}
    