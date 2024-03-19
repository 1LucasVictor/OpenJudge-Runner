#include<stdio.h>
#define N 8

int putQ(int);
void print(void);

int row1[15],x[8],n,row[15],col[15],dp[15],dn[15];


int main(){
  int i,y,e,m=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&x[i],&y);
    row1[x[i]]=y;

    if(x==0){
      m = 1;
    }
  }
  if(m == 1){
    e=putQ(1);
  }
  else e=putQ(0);


  return 0;
}

int putQ(int i){
  int a,c=0,j;

  if(i == N){
    for(j=0;j<n;j++){
      a=x[j];
      if(row1[a]==row[a]){
        c++;
      }

    }
    if(c == n){
      print();

      return 0;
    }

    c=0;
  }

  for(j=0;j<N;j++){
    if (col[j] == -1 || dp[i+j] == -1 || dn[i-j+N-1] == -1 ) continue;
    
    row[i] = j;
    col[j] = dp[i+j] = dn[i-j+N-1] = -1;

    putQ(i+1);
    col[j] = dp[i+j] = dn[i-j+N-1] = 0;
  }
}


void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){

      if(row[i] != j)printf(".");

      else printf("Q");
    }

    printf("\n");
  }
}

