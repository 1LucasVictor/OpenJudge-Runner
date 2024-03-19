#include<stdio.h>
#include<stdbool.h>
#define N 8
#define FREE -1
#define NOT 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
bool X[N][N];

void initialize(){
  int i;
  for(i=0;i<N;i++){row[i]=col[i]=FREE;}
  for(i=0;i<2*N-1;i++){dpos[i]=dneg[i]=FREE;} 
}
void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]){
	if(row[i]!=j) return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%s",row[i]==j?"Q":".");
    }
    printf("\n");
  }
}
void recursive(int i){
  int j;
  if(i==N){
    print(); return; 
  }

  for(j=0;j<N;j++){
    if(NOT==col[j]||NOT==dpos[i+j]||NOT==dneg[i-j+N-1]) continue;
    row[i]=j;col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT;
    recursive(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

int main(){
  int i,j,a,b;
  initialize();

  for(i=0;i<N;i++)
    for(j=0;j<N;j++) X[i][j]=false;

  scanf("%d",&j);

  for(i=0;i<j;i++){
    scanf("%d %d",&a,&b);
    X[a][b]=true;  
  }
  recursive(0);

  return 0;
}

