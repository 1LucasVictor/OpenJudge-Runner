#include<stdio.h>
#define N 8
#define notfree 1
#define free 0

int queen[N],col[N],dpos[N*2-1],dneg[N*2-1],h[N];

void setQueen(int i){

  int j;

  if(i == N) {
    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	if(j == queen[i])printf("Q");
	else printf(".");
      }
      printf("\n");
    }
    return;
  }

  if(h[i] != -1){
    setQueen(i+1);
    return;
  }

  for(j=0;j<N;j++){
    if(col[j] == notfree || dpos[i+j] == notfree || dneg[i-j+N-1] == notfree) continue;

    queen[i]=j;
    col[j]=notfree;
    dpos[i+j]=notfree;
    dneg[i-j+N-1]=notfree;

    setQueen(i+1);

    col[j]=free;
    dpos[i+j]=free;
    dneg[i-j+N-1]=free;
    
  }
  
}

int main(){

  int i,j,k,r,c;

  scanf("%d",&k);

  for(i=0;i<N;i++)h[i]=-1;

  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    queen[r]=c;
    col[c]=notfree;
    dpos[r+c]=notfree;
    dneg[r-c+N-1]=notfree;
    h[r]=c;
    }

  setQueen(0);

  return 0;
}

