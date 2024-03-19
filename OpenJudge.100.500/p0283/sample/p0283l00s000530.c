#include <stdio.h>
#define N 8
void putQ(int);
int row[N],col[N];
int dpos[2*N-1],dneg[2*N-1];
int already[N];
int main(){
  int i,j;
  int k,r,c;

  for(i = 0; i < N; i++){
    row[i]=0;
    col[i]=0;
    already[i]=0;
  }
  for(i = 0; i < 2*N-1; i++){
    dpos[i]=0;
    dneg[i]=0;
  }
  
  scanf("%d",&k);
  
  for(i = 0; i < k; i++){
    scanf("%d%d",&r,&c);
    row[r]=c;
    col[c]=1;
    dpos[r+c]=1;
    dneg[r-c+N-1]=1;
    already[r]=1;
  }
  
  putQ(0);


  return 0;
}
  

void putQ(int i){
  int j;
  if(i == N){
    for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){
	if(row[i] == j) printf("Q");
	else printf(".");
      }
      printf("\n");
    }
    return;
  }
  if(already[i]==1) putQ(i+1);
  else{
  for(j = 0; j < N; j++){
    if(col[j] != 0 || dpos[i+j] != 0 || dneg[i-j+N-1] != 0)
      continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = 1;
    putQ(i+1);
    col[j] = dpos[i+j] = dneg[i-j+N-1] = 0;
  }
  }
}






    
  
    

