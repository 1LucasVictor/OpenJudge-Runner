#include <stdio.h>
#define Free -1
#define NotFree 1
#define N 8
#define M 16

void putQ(int);
void printB(void);

int B[N][N];
int BG[N],Btate[N],Brn[M],Bln[M]; /* Brn=左上から右下,Bln=右上から左下 */

int main()
{
  int k,i,j,n,m;

  scanf("%d",&k);

  for(i=0;i<N;i++){
    Btate[i] = BG[i] = Free;
    for(j=0;j<N;j++){
      B[i][j] = 0;
    }
  }

  for(i=0;i<M;i++){
    Brn[i] = Bln[i] = Free;
  }

  for(i=0;i<k;i++){
    scanf("%d%d",&n,&m);
    B[n][m] = 1;
  }

  putQ(0);

  return 0;
}

void putQ(int i)
{
  int j;

  if(i == N){
    printB();
    return;
  }

  for(j=0;j<N;j++){
    if(Btate[j]==NotFree || Brn[i-j+(N-1)]==NotFree || Bln[i+j]==NotFree) conti\
nue;
    BG[i] = j; /* i行j列目にQを入れる */
    Btate[j] = Brn[i-j+(N-1)] = Bln[i+j] = NotFree;
    putQ(i+1);
    BG[i] = Btate[j] = Brn[i-j+(N-1)] = Bln[i+j] = Free;
  }
}

void printB()
{
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(B[i][j]){
        if(BG[i]!=j) return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(BG[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
