#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];

bool X[N][N];




void ini(){
  int i;
  for(i=0;i<N;i++){
    row[i]=FREE,
    col[i]=FREE;
  }
 for(i=0;i<2*N-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }

}


void pri(){
  
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
       printf("%s",((row[i]==j)?"Q":"."));
     }
     printf("\n");
  }
}


void rec(int i){
  int j;
  if(i==N){
    pri();
    return;
  }

   for(j=0;j<N;j++){
     if(NOT_FREE==col[j] || NOT_FREE==dpos[i+j] || NOT_FREE==dneg[i-j+N-1]) continue;

     row[i]=j;
     col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
     rec(i+1);

     row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
   }
}


int main(){
  int i,j;
  
  ini();

   for(i=0;i<N;i++){
     for(j=0;j<N;j++){
       X[i][j]=false;
     }}


   int k,r,c;
   scanf("%d",&k);

   
   for(i=0;i<k;i++){
     scanf("%d%d",&r,&c);
     X[r][c]=true;
   }

   rec(0);

   return 0;
}


