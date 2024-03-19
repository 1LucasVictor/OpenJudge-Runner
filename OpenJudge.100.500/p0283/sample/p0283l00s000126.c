#include<stdio.h>
#define N 8
#define FREE -1
#define NOTFREE 1
void printer(void);
void Queen(int);
int line[N],row[N],srashr[2*N-1],srashl[2*N-1];
int X[N][N];
int main(){
  int i,j,a,x,y;
  for(i=0;i<N;i++){
    row[i]=FREE;
    line[i]=FREE;
  }
  for(i=0;i<2*N-1;i++){
    srashr[i]=FREE;
    srashl[i]=FREE;
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[N][N]=0;
    }
  }
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d %d",&x,&y);
    X[x][y]=1;
  }
  Queen(0);
  return 0; 
}

void printer(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]==1){
	if(row[i]!=j)
	  return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)
	printf("Q");
      else
	printf(".");
    }
    printf("\n");
  }
}

void Queen(int x){
  int i;
  if(x==N){
    printer();
    return;
  }
  for(i=0;i<N;i++){
    if(NOTFREE==line[i] || NOTFREE==srashr[x+i] || NOTFREE==srashl[x-i+N-1])
      continue;
  row[x]=i;
  line[i]=srashr[x+i]=srashl[x-i+N-1]=NOTFREE;
  Queen(x+1);
  row[x]=line[i]=srashr[x+i]=srashl[x-i+N-1]=FREE;
    }
}


