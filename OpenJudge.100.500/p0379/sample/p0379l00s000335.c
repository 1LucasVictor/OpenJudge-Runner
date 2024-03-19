#include<stdio.h>

int main(){
  int n,m,i,j,s,z;
  int ans[1000][1000]={{0}};
  int matrix[100][100]={{0}};
  int vector[1000][1]={{0}};
  /*Input*/
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for(i=0;i<m;i++){
    scanf("%d",&vector[i][0]);
  }
  /*Output*/
  for(z=0;z<n;z++){
    for(s=0;s<m;s++){
      ans[z][0] += (matrix[z][s]*vector[s][0]);
    }
  }
  for(i=0;i<n;i++){
    printf("%d\n",ans[i][0]);
  }

  return 0;
  
}

