#include <stdio.h>

#define N 8

int col[N],row[N],dpos[2*N],dneg[2*N],m[N][N];

void pri(void){
  
  int i,j;
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(m[i][j]==1 && row[i]!=j)return;
    }
  }
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }

}

void queen(int i){

  int j,k;

  if(i==N){
    pri();
    return;
  }
  /*
  for(k=0;k<N;k++){
    for(j=0;j<N;j++){
      if(m[k][j]==1)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  printf("\n");

  */
  
  for(j=0;j<N;j++){
    //  printf("i:%d row:%d col:%d pos:%d neg:%d\n",i,row[i],col[j],dpos[i+j],dneg[i-j+N-1]);
    if(col[j]==1 || dpos[i+j]==1 || dneg[i-j+N-1]==1)continue; 

    row[i]=j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = 1;
    queen(i+1);
    row[i]=col[j] = dpos[i+j] = dneg[i-j+N-1] = 0;
    
  }
 
}


int main(){

  int n,i,j,r,c;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    m[r][c]=1;
  }
  /*
    for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    m[r][c]=1;
    row[r] = c;
    col[c]= dpos[r+c] = dneg[r-c+N-1] = 1;
    }
  */

  
  queen(0);
  
 
  return 0;
}

