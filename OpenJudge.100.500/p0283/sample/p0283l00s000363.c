#include <stdio.h>
#define MAX 8
#define FREE -1
#define NOTFREE 1

int mat[MAX][MAX],row[MAX],col[MAX],right[2*MAX-1],left[2*MAX-1];

void print()
{
  int i,j;
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      if(mat[i][j]){
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

void queen(int i)
{
  int j;
  if(i==MAX){
    print();
    return;
  }
  for(j=0;j<MAX;j++){
    if(col[j]==NOTFREE ||
       right[i+j]==NOTFREE ||
       left[i-j+MAX-1]==NOTFREE) continue;

    row[i]=j;
    col[j]=NOTFREE;
    right[i+j]=NOTFREE;
    left[i-j+MAX-1]=NOTFREE;

    queen(i+1);
    row[i]=FREE;
    col[j]=FREE;
    right[i+j]=FREE;
    left[i-j+MAX-1]=FREE;
  }
}

int main()
{
  int n,i,j,r,c;

  for(i=0;i<MAX;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(i=0;i<2*MAX-1;i++){
    right[i]=FREE;
    left[i]=FREE;
  }

  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      mat[i][j]=0;
    }
  }

  scanf("%d",&n);
  for(i=0;i<n;i++) {
    scanf("%d%d",&r,&c);
    mat[r][c]=1;
  }
  queen(0);

  return 0;

}

