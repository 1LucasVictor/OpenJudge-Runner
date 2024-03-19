#include <stdio.h>
#define N 100000
void judgment(int*,int);
int main(){
  int C[N],i,k,judge;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    judge = scanf("%d",&C[i]);
    if(judge==-1)break;
      }
    judgment(C,k);
  return 0;
}
void judgment(int *c,int n){
  int i,j,k,max=0,cnt=0,flag=0;

  for(i=0;i<n;i++){
    if(*(c+i)>max){
      max=*(c+i);
    }
  }
  for(j=2;j<=max;j++){
    for(k=2;k<j;k++){
      if(j%k==0)flag=1;
  }
    if(flag==0)cnt++;
    flag=0;
  
  }
  printf("%d\n",cnt);
}

