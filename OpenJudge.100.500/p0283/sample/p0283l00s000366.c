#include<stdio.h>
#define N 8
#define WHITE 1
#define BLACK -1
 
int map[N][N];

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];


void outprint(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(map[i][j]==BLACK) {
	if(row[i]!=j)return;
      }
    }
  }


  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){printf("Q");}
      else printf(".");
    }
    printf("\n");
    
  }

}



void initialize(){
  int i,j;
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      map[i][j]=WHITE;
    }
  }
  
  for(i=0;i<N;i++){row[i]=WHITE;col[i]=WHITE;}
  for(i=0;i<2*N-1;i++){dpos[i]=WHITE;dneg[i]=WHITE;}
  
}



void insert(int j){
  if(j==N){
    outprint();
    return; }

  int i;
  
  for(i=0;i<N;i++){
    if(col[i]==BLACK || dpos[i+j]==BLACK || dneg[j-i+N-1]==BLACK){continue; }
    row[j]=i;
    col[i]=dpos[j+i]=dneg[j-i+N-1]=BLACK;
    insert(j+1);
    row[j]=col[i]=dpos[j+i]=dneg[j-i+N-1]=WHITE;
  }

}


int main(){
  int number;
  int i,j;
  int tate,yoko;
  
  scanf("%d",&number);
  for(i=0;i<number;i++) {
    scanf("%d%d",&tate,&yoko);
    map[tate][yoko]=BLACK;
  }
  /*
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%d ",map[i][j]);
    }
    printf("\n");
  }
  */
  
  insert(0);  

  return 0;
}

