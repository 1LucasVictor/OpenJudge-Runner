#include <stdio.h>

#define N 8
#define FREE 1
#define NOT (-1)
#define TRUE 2
#define FALSE 3


int yoko[N];
int tate[N];
int right_c[2*N-1];
int left_c[2*N-1];

int check[N][N];

void init();
void print();
void recursive(int);


int main(){
  int i=0;
  int j=0;
  int k=0;
  int r=0;
  int c=0;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      check[i][j]=FALSE;
    }
  }

  scanf("%d", &k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    check[r][c]=TRUE;
  }
  
  init();
  recursive(0);

  return 0;
}

void init(){
  int i=0;
  for(i=0;i<N;i++){
    tate[i]=FREE;
    yoko[i]=FREE;
  }

  for(i=0;i<N*2-1;i++){
    left_c[i]=FREE;
    right_c[i]=FREE;
  }

}

void recursive(int i){
  int j=0;

  if(i==N){
    print();
    return;
  }

  for(j=0;j<N;j++){
    if(tate[j]==NOT || left_c[i+j]==NOT || right_c[i-j+N-1]==NOT) continue;

    yoko[i]=j;
    tate[j]=NOT;
    left_c[i+j]=NOT;
    right_c[i-j+N-1]=NOT;

    recursive(i+1);

    yoko[i]=FREE;
    tate[j]=FREE;
    left_c[i+j]=FREE;
    right_c[i-j+N-1]=FREE;
  }
}

void print(){
  int i=0;
  int j=0;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(check[i][j]==TRUE){
	if(yoko[i]!=j) return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(yoko[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

