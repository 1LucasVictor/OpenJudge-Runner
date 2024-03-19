#include<stdio.h>
#define M 1000000
int main(){
  int n,c,i,j;
  char p[M]={1,1};
  for(i=2;i*i<M;i++){
    if(p[i])continue;
    for(j=i*i;j<M;j+=i)p[j]=1;
  }
  while(scanf("%d",&n)!=EOF){
    for(c=n;n;n--)c-=p[n];
    printf("%d\n",c);
  }
  return 0;
}