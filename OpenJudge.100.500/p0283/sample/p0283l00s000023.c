#include<stdio.h>
#define N 8
int row[N],col[N],pos[2*N-1],neg[2*N-1],A[N][N],i=0,j=0,k,r,c;
void print(void);

void recursive(int i){
  int j;
  if(i==N){
    print();
    return;
  }

  for(j=0; j<N; j++){
    if(row[j]==1 || pos[i+j]==1 || neg[i-j+N-1]==1)
			continue;
		col[i] = j;
    row[j] = pos[i+j] = neg[i-j+N-1] = 1;
    recursive(i+1);
    col[i] = row[j] = pos[i+j] = neg[i-j+N-1] = -1;
  }
}

void initial(){
  int i=0;
	while(i<N){
    row[i] = -1;
    col[i] = -1;
    i++;
	}
	i=0;
  while(i<2*N-1){
    pos[i] = -1;
    neg[i] = -1;
    i++;
  }
}

void print(){
  int i=0,j;
  while(i<N){
    j=0;
    while(j<N){
      if(A[i][j] == 1)
				if(col[i]!=j) return;
      j++;
    }
    i++;
  }
    i=0;
  while(i<N){
    j=0;
    while(j<N){
      if(col[i]==j) printf("Q");
      else printf(".");
      j++;
    }
    printf("\n");
    i++;
  }
}

int main(){
  initial();

  while(i<N){
    while(j<N){
      A[i][j] = -1;
      j++;
    }
    i++;
  }
  scanf("%d",&k);
  i=0;
  while(i<k){
    scanf("%d%d",&r,&c);
    A[r][c] = 1;
    i++;
  }

  recursive(0);

  return 0;
}
