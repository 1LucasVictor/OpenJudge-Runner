#include<stdio.h>
#include<stdlib.h>
#define df 0


int main(){
  int i,a,b,flag=1;
  char S[5],p,q;
  scanf("%s",S);
  p=S[0];
  for(i=1;i<4;i++){
    if(S[i]==p){
      a=i;
      b=a%3+1;
      break;
    }
  }
  if(i==4)flag=0;
  else if(S[a]==S[b] || S[b]!=S[6-a-b])flag=0;

  printf("%s",flag?"Yes":"No");
  return 0;
}


/// confirm df==1 ///