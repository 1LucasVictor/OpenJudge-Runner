#include <stdio.h>
#define MAX 8
#define FREE 0
#define NOT_FREE 1
int Q[MAX][MAX];
int col[MAX],row[MAX],dpos[MAX*2-1], dneg[MAX*2-1];
int putQueen(int);
void print(void);


int main()
{
  int i,j,n;
  int r,c;

  //?????????
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      Q[i][j]=0;
    }
  }
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    Q[r][c]=1;
  }

  //?????????
  for(i=0;i<MAX;i++){
    col[i]=FREE;
    row[i]=FREE;
  }
  for(i=0;i<MAX*2-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
  
  putQueen(0);

  return 0;
}

int putQueen(int i)
{
  int j;
  if(i==MAX) print();
  for(j=0;j<MAX;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+MAX-1]==NOT_FREE) continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+MAX-1]=NOT_FREE;
    putQueen(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+MAX-1]=FREE;
  }
}

void print()
{
  int i,j;
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      if(Q[i][j]){
	if(row[i]!=j) return;
      }
    }
  }
   
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      if(row[i]==j) printf("Q");
       else printf(".");
     }
     printf("\n");
   }
}