#include<stdio.h>
#define N 8
int putqueen(int);
void print();
int row1[15],x[8],k,row[15],col[15],dpos[15],dneg[15];


int main(){
int i,y,e,m=0;
  scanf("%d",&k);
  for(i=0;i<k;i++){
scanf("%d%d",&x[i],&y);
row1[x[i]]=y;

  if(x==0)m=1;

  }
  if(m==1)e=putqueen(1);
  else e=putqueen(0);
  return 0;
}

int putqueen(int i){
  int c=0,j,a;
  if(i==N ){
    for(j=0;j<k;j++){
      a=x[j];
      if(row1[a]==row[a]){
         c++;
       }

    }
    if(c==k){
    print();
    return 0;
  }
  c=0;
  }
  for(j=0;j<N;j++){
    if (col[j] == -1 || dpos[i+j] == -1 || dneg[i-j+N-1] == -1 ) {
      continue;
    }
    row[i] = j;
     col[j] = dpos[i+j] = dneg[i-j+N-1] = -1;

    putqueen(i+1);
  col[j] = dpos[i+j] = dneg[i-j+N-1] = 0;
}
}


void print(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]!=j)printf(".");
      else printf("Q");
    }
    printf("\n");
  }
}

