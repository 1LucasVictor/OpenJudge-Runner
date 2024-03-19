#include <stdio.h>
int main(){
  int N,M,i,ansa,ansb,ansc,num;
  int s,c;
  ansa=-1;
  ansb=-1;
  ansc=-1;
  scanf("%d %d",&N,&M);
  for(i=0;i<M;i++){
    scanf("%d %d",&s,&c);
    if(s==1){
      if(c!=ansa && ansa!=-1){
        printf("-1");
        return 0;
      }
      else ansa=c;
    }
     if(s==2){
      if(c!=ansb && ansb!=-1){
        printf("-1");
        return 0;
      }
      else ansb=c;
    }
     if(s==3){
      if(c!=ansc && ansc!=-1){
        printf("-1");
        return 0;
      }
      else ansc=c;
    }
  }
  if(ansa==0 && N!=1){
    printf("-1");
        return 0;
  }
  if(ansa==-1) ansa=1; 
  if(ansb==-1) ansb=0;
  if(ansc==-1) ansc=0;
  
  if(N==3) num=100*ansa+10*ansb+ansc;
  if(N==2) num=10*ansa+ansb;
  if(N==1) num=ansa;
  printf("%d",num);
  return 0;
}