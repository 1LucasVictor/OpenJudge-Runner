#include <stdio.h>
#define N 8
#define F -1
#define NF 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
char ban[N][N];

void check();
void putQueen(int);
void initialize();

int main(){
  int n,p,q,i,j;

for(i=0;i<N;i++){
  for(j=0;j<N;j++){
    ban[i][j]='.';
  }
}

initialize();

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d",&p,&q);
    ban[p][q]='Q';
  }

  putQueen(0);

  

return 0;
}


void initialize(){
  int i;
  for(i=0;i<N;i++){
    row[i]=F;
    col[i]=F;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=F;
    dneg[i]=F;
  }
}

void check(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(ban[i][j]=='Q'){
        if(row[i]!=j)
        return;
      }
    }
  }

for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
        ban[i][j]='Q';
      }
    }
  }

for(i=0;i<N;i++){
  for(j=0;j<N;j++){
    printf("%c",ban[i][j]);
  }
  printf("\n");
}

}

void putQueen(int x){
   int i,j;

   if(x==N){
     check();
       return;
   }

    for(i=0;i<N;i++){
       if(col[i]==NF||dpos[x+i]==NF||dneg[x-i+N-1]==NF) {
         continue;
       }
       
       row[x]=i;
       col[i]=NF;
       dpos[x+i]=NF;
       dneg[x-i+N-1]=NF;
       
       putQueen(x+1);
       
       row[x]=F;
       col[i]=F;
       dpos[x+i]=F;
       dneg[x-i+N-1]=F;

       
    }
 
}

