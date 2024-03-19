#include<stdio.h>
int main(){
  int s[5],c[5],t[3],N,M,answer,i,j;
  t[0]=0;t[1]=0;t[2]=0;
  answer=0;
  scanf("%d%d",&N,&M);
  for(i=0;i<M;i++){
    scanf("%d%d",&s[i],&c[i]);
    if(s[i]==1 && c[i]==0){
      printf("-1\n");
      return 0;
    }
  }
  for(i=0;i<M;i++){
    for(j=i+1;j<M;j++){
      if(s[i]==s[j] && c[i]!=c[j]){
        printf("-1");
        return 0;
      }
    }
  t[s[i]-1]=c[i];
  }
  answer=100*t[0]+10*t[1]+t[2];
  printf("%d\n",answer);
  return 0;
}