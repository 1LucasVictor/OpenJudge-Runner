#include <stdio.h>
#define N 8

void put(int);
int B[N][N];
int yoko[N];
int tate[N];
int naname1[2*N-1];
int naname2[2*N-1];
int main(){
  int i,j,n,a,b;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){ 
      B[i][j] = 0;
      yoko[i] = -1;
      tate[i] = -1;
    }
  }
   for(i=0;i<2*N-1;i++){
      naname1[i] = -1;
      naname2[i] = -1;
   }
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    B[a][b] = 1;
  }

  put(0);
  
  return 0;
}

void put(int i){
  int j,k;
  //printf("%d\n",i);
  if(i == N){
    
    for(k=0;k<N;k++){
      for(j=0;j<N;j++){
	if(B[k][j] == 1){
	  if(yoko[k] != j){
	    return;
	  }
	}
      }
    }
    
    for(k=0;k<N;k++){
      for(j=0;j<N;j++){
	if(yoko[k] == j)printf("Q");
	else printf(".");
      }
      printf("\n");
    }
    
    return;
  }
  
  for(j=0;j<N;j++){
  if(tate[j] == 1 || naname1[i+j] == 1|| naname2[i-j+N-1] == 1)continue;
    
    yoko[i] = j;
    tate[j] = naname1[i+j] = naname2[i-j+N-1] = 1;
    
    /*if(yoko[i+1] != -1 && yoko[i+2] != -1)put(i+3);
    else if(yoko[i+1] != -1)put(i+2);
    else*/
    //printf("i is %d\n",i);
    put(i+1);
    
    tate[j] = naname1[i+j] = naname2[i-j+N-1] = -1;
    }
}

