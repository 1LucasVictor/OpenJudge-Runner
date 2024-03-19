#include<stdio.h>
#include<stdlib.h>
#define bin(n,m)(((n)>>(m))&1)

int p[8];

void find(int a,int b, int c,int n){
  int j,i;
  if(n==8){
    for(i=0;i<8;i++){
      for(j=0;j<8;j++)putchar(p[i]==j?'Q':'.');
      puts("");
    }
    exit(0);
  }
  if(p[n]!=-1){
    int t=1<<p[n];
    if(!bin(a|b|c,p[n]))find((a|t)<<1,(b|t),(c|t)>>1,n+1);
    return;
  }
  for(j = 0;j<8;j++)if(!bin(a|b|c,j)){
      p[n]=j;
      int t=1<<j;
      find((a|t)<<1,(b|t),(c|t)>>1,n+1);
      p[n]=-1;
    }
}

int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<8;i++)p[i]=-1;
  while(n--){
    int x,y;
    scanf("%d%d",&x,&y);
    p[x]=y;
  }
  find(0,0,0,0);
}
  

    

