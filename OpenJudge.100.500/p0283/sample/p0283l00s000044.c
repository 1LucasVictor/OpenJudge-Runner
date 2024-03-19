#include <stdio.h>
#include <math.h>
#define Q 8
#define A -1
#define U 1
#define true 1
#define false 0


int row[Q],col[Q],rt[2*Q-1],l[2*Q-1];
int X[Q][Q];
int datar=100;

void suit(){
  int i;
  for(i=0;i<Q;i++){
    row[i]=A;
    col[i]=A;
  }
  for(i=0;i<2*Q-1;i++){
    rt[i]=A;
    l[i]=A;
  }
}

void print(){
  int i,j;
  double mathe;

  for(i=0;i<Q;i++){
    for(j=0;j<Q;j++){
      if(X[i][j]==true){
	if(row[i] != j)return;
      }
    }
  }
  for(i=0;i<Q;i++){
    for(j=0;j<Q;j++){
       if(row[i] == j)printf("Q");
       else printf(".");
    }
    printf("\n");
  }
}


void resuit(int i){
  int j;
  if(i == Q){
    print();
    return;
  }

  for(j=0;j<Q;j++){
    if(U == col[j] || U == rt[i+j] || U == l[i-j+Q-1])continue;
    row[i]=j;
    col[j]=U;
    rt[i+j]=U;
    l[i-j+Q-1]=U;
    resuit(i+1);
    row[i]=A;
    col[j]=A;
    rt[i+j]=A;
    l[i-j+Q-1]=A;
  }
}

int main(){
  suit();

  int i,j,u,r,c;
  

  for(i=0;i<Q;i++){
    for(j=0;j<Q;j++){
      X[i][j]=false;
    }
  }

    scanf("%d",&u);

    for(i=0;i<u;i++){
      scanf("%d %d",&r,&c);
      X[r][c]=true;
    }

    resuit(0);

    return 0;
}

      


