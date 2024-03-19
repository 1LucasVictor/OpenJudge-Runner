#include<stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int tate[N],yoko[N],hnaname[2*N-1],mnaname[2*N-1];
int X[N][N];

void initialize(){
  int i;
  for(i=0;i<N;i++){tate[i]=FREE; yoko[i]=FREE;}
  for(i=0;i<2*N-1;i++){hnaname[i]=FREE; mnaname[i]=FREE;}
}

void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]){
        if(tate[i]!=j)return;
      }
   }
  }for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf((tate[i]==j)?"Q":".");
    }
    printf("\n");
  }
}
void haiti(int i){
    int j;
    if(i==N){
        print();
        return;
    }
    for(j=0;j<N;j++){
        if(NOT_FREE==yoko[j]||NOT_FREE==hnaname[i+j]||NOT_FREE==mnaname[i-j+N-1])
        continue;
        tate[i]=j;
        yoko[j]=hnaname[i+j]=mnaname[i-j+N-1]=NOT_FREE;
        haiti(i+1);
        tate[i]=yoko[j]=hnaname[i+j]=mnaname[i-j+N-1]=FREE;
    }
}

int main(){
    int i,j,k,r,c;
    initialize();
    for(i=0;i<N;i++){
        for(j=0;j<N;j++) X[i][j]=0;
    }
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d%d",&r,&c);
        X[r][c]=1;
    }
    haiti(0);
    return 0;
}


