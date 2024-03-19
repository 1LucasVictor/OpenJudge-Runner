#include<stdio.h>
#include<math.h>
int main(){
  int s[5],c[5],N,M,answer,i,j;
  answer=0;
  scanf("%d%d",&N,&M);
  for(i=0;i<M;i++){
    scanf("%d%d",&s[i],&c[i]);
    if(s[i]==1 && c[i]==0 &&N!=1){
      printf("-1\n");
      return 0;
    }
  }
  for(i=0;i<M;i++){
    for(j=i+1;j<M;j++){
      if(s[i]==s[j]){
        if(c[i]==c[j])
          c[j]=0;
        else{
        printf("-1\n");
        return 0;
        }
      }
    }
  }
  for(i=0;i<M;i++){
    answer=answer+c[i]*pow(10,N-s[i]);}
  printf("%d\n",answer);
  return 0;
}