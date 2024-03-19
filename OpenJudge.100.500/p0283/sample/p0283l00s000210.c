#include<stdio.h>

#define N 8

#define F -1
#define NF 1

int str[N][N];

int row[N],col[N];
int dpos[2*N-1],dneg[2*N-1];

void initialize(void);
void judge(int i);
void print(void);


int main(void){
  int i,j;
  int k;
  int r,c;
  
  initialize();

  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      str[i][j] = 0;
    }
  }

  scanf("%d",&k);
  for(i = 0;i < k;i++){
    scanf("%d %d",&r,&c);
    str[r][c] = 1;
  }

  judge(0);

  return 0;
}
	
	


void initialize(void){
  int i;

  for(i = 0;i < N;i++){
    row[i] = F;
    col[i] = F;
  }

  for(i = 0;i < 2*N-1;i++){
    dpos[i] = F;
    dneg[i] = F;
  }

}



void print(void){
  int i,j;

  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(str[i][j]){
	if(row[i] != j){
	  return;
	}
      }
      
    }
  }


  
  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(row[i] == j){
	putchar('Q');
      } else {
	putchar('.');
      }
      
    }
    puts("");
  }
}



void judge(int i){
  int j;
  
  if(i == N){
    print();
    return;
  }

  for(j = 0;j < N;j++){
    if(col[j] == NF || dpos[i+j] == NF || dneg[i-j+N-1] == NF){
      continue;
    }

    row[i] = j;
    
    dneg[i-j+N-1] = NF;
    dpos[i+j] = NF;
    col[j] = NF;

    judge(i+1);

    dneg[i-j+N-1] = F;
    dpos[i+j] = F;
    col[j] = F;
    row[i] = F;
  }

}


