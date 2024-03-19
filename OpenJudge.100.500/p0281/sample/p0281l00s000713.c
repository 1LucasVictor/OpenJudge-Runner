#include <stdio.h>
int KI[100][100];
int N;

void kansu(){
  int i,j,k,min,m,b;
  int A[100],bango[100];

  for(i=0; i< N;i++){
    bango[i]=0;
    A[i]=2000000;
  }
  bango[0]=1;
  A[0]=0;

  while(1){
    k=-1;
    min=2000000;
    for(i=0; i <N ;i++){
      if(A[i] < min && bango[i]!=2){
        k=i;
        min=A[i];
      }
    }
    if(k==-1){
      break;
    }
    bango[k]=2;
    for(b=0;b<N;b++){
      if(bango[b] !=2 && KI[k][b]!=2000000){
        if(A[k]+KI[k][b] < A[b]){
          bango[b]=1;
          
          A[b]=A[k]+KI[k][b];
        }
      }
    }
  }


  for(i=0;i < N;i++){
    m=(A[i]==2000000 ? -1:A[i]);
    printf("%d %d",i,m);
    printf("\n");
  }
}

int main(){
  int i,j,k,a,b,c,d;
  scanf("%d",&N);
  for(i=0;i <N;i++){
    for(j=0; j < N;j++){
      KI[i][j]=2000000;
    }
  }
  for(i=0;i < N;i++){
    scanf("%d %d",&a,&b);
    for(j=0; j < b;j++){
      scanf("%d %d",&c,&d);
      KI[a][c]=d;
    }
  }
  kansu();
  return 0;

}

