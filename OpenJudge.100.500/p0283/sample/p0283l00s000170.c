#include<stdio.h>
#include<string.h>

#define N 8
#define FREE  -1
#define NOT_FREE 1

int X[N][N],row[N],col[N],dpos[2*N-1],dneg[2*N-1];

void initialize(){
 int i,j;
 for(i=0;i<N;i++){
   row[i] = FREE;
   col[i] = FREE;

   for(j=0;j<N;j++){
     X[i][j]=0;
 }
 }
 for(j=0;j<2*N-1;i++){
   dpos[j]=FREE;
   dneg[j]=FREE;
 }
}


void printBoard(){
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
     if(row[i]==j) {
         printf("Q");
     }
     else {
         printf(".");
   }
}
 printf("\n");
 }
 return;
}

void recursive(int i){
 int j;
 if(i==N){
   printBoard(); 
   return;
 }
 for(j=0;j<N;j++){
   if(col[j]  == NOT_FREE  || 
      dpos[i+j] == NOT_FREE ||
      dneg[i-j + N-1] == NOT_FREE ) {
          continue;
}
   row[i]=j; col[j] = dpos[i+j] = dneg[i-j + N-1] = NOT_FREE;

   recursive(i+1);

   row[i] = col[j] = dpos[i+j] = dneg[i-j + N-1] = FREE;
 }
}

int main(){
   int i,j,x,y,n;

   //initialize();
 for(i=0;i<N;i++){
   row[i] = FREE;
   col[i] = FREE;

   for(j=0;j<N;j++){
     X[i][j]=0;
 }
 }

 for(j=0;j<2*N-1;j++){
   dpos[j]=FREE;
   dneg[j]=FREE;
}
   scanf("%d",&n);
 for(i=0;i<n;i++){
   scanf("%d%d",&x,&y);
   X[x][y]=1;
 }
 recursive(0);
}


