#include <stdio.h>
#define M 8
#define empty -1
#define in 1

int choice[M][M],tate[M],yoko[M],nanameun[2*M-1],nanameup[2*M-1];

void judge_print(){
  int i,j;
  for(i=0;i<M;i++){
    for(j=0;j<M;j++){
      if(choice[i][j]==in){
	if(tate[i]!=j) return;
      }
    }
  }
  for(i=0;i<M;i++){
    for(j=0;j<M;j++){
      if(tate[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void put_Queen(int a){
  int i;
  
  if(a==M){
    judge_print();
    return;
  }
  for(i=0;i<M;i++){
    if(yoko[i]==in || nanameun[a+i]==in || nanameup[a-i+M-1]==in){
     continue;
    }
    tate[a]=i;
    yoko[i]=nanameun[a+i]=nanameup[a-i+M-1]=in;
    put_Queen(a+1);
    tate[a]=yoko[i]=nanameun[a+i]=nanameup[a-i+M-1]=empty;
  }
}

int main(){
  int sizi,i,j,a,b;

  for(i=0;i<M;i++){
    tate[i]=empty;
    yoko[i]=empty;
  }
  for(i=0;i<2*M-1;i++){
    nanameun[i]=empty;
    nanameup[i]=empty;
  }
  for(i=0;i<M;i++){
    for(j=0;j<M;j++){
      choice[i][j]=empty;
    }
  }

  scanf("%d",&sizi);

  for(i=0;i<sizi;i++){
    scanf("%d%d",&a,&b);
    choice[a][b]=in;
  }

  put_Queen(0);

  return 0;
}

  

