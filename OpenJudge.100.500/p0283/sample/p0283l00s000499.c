#include<stdio.h>
#include<stdbool.h>

#define N 8
#define F -2
#define NF 1

int row[N],co[N],pos[2*N-1],neg[2*N-1];
bool T[N][N];

void initialize(){
  int i;
  for(i=0;i<N;i++){
    row[i]=F;
    co[i]=F;
  }
  for(i=0;i<N*2-1;i++){
    pos[i]=F;
    neg[i]=F;
  }
}

void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(T[i][j]){
	if(row[i]!=j)return;
      }
    }
  }

   for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
	printf("Q");
      }else{
	printf(".");
      }
    }
    printf("\n");
  }
}

void saiki(int i){

  int j;
  
  if(i==N){
    print();
    return;
  }

  for(j=0;j<N;j++){
    if(NF==co[j]||NF==pos[i+j]||NF==neg[i-j+N-1])continue;
    row[i]=j;
    co[j]=NF;
    pos[i+j]=NF;
    neg[i-j+N-1]=NF;

    saiki(i+1);
    
    row[i]=F;
    co[j]=F;
    pos[i+j]=F;
    neg[i-j+N-1]=F;
  }
}

  int main(){
    int i,j,a,b,c;
    
    initialize();

    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	T[i][j]=false;
      }
    }

    scanf("%d",&a);

    for(i=0;i<N;i++){
      scanf("%d%d",&b,&c);
      T[b][c]=true;
    }

    i=0;
    saiki(i);
    
    return 0;
  }