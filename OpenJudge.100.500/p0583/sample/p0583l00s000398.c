#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define LL long long
#define INF 1<<31-1
#define LLINF 1<<63-1
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define MOD 1000000007
#define NUM 100001
void swap(int* x,int* y){
  int tmp=*x;*x=*y;*y=tmp;
}

int main() {
  int N,A,B,C,D,i,ans;
  scanf("%d%d%d%d%d",&N,&A,&B,&C,&D);
  A--;B--;C--;D--;
  char S[N+1];
  scanf("%s",S);
  if(D<C){
    ans=0;
    for(i=B-1;i<D;i++)if(S[i]=='.'&&S[i+1]=='.'&&S[i+2]=='.')ans=1;
    for(i=A+1;i<C-1;i++)if(S[i]=='#'&&S[i+1]=='#')ans=0;
  }else if(C<B){
    ans=1;
    for(i=A+1;i<C-1;i++)if(S[i]=='#'&&S[i+1]=='#')ans=0;
    for(i=B+1;i<D-1;i++)if(S[i]=='#'&&S[i+1]=='#')ans=0;
  }else{
    ans=1;
    for(i=A+1;i<D-1;i++)if(S[i]=='#'&&S[i+1]=='#')ans=0;
  }
  if(ans==1)printf("Yes");
  else printf("No");

  //printf("%d\n",ans);
	return 0;
}
