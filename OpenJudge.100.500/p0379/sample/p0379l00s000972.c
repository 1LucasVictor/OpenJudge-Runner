#include<stdio.h>
int main(void)
{
  int column;
  int row;
  int i,j;

  scanf("%d %d",&column,&row);

  int a[column][row];
  int b[row];
  int c[column];

  //c????????????
  for(i=0;i<column;i++){
    c[i] = 0;
  }


  //a
  for(i=0;i<column;i++){
    for(j=0;j<row;j++){
      scanf("%d",&a[i][j]);
    }
  }

  //b
  for(i=0;i<row;i++){
    scanf("%d",&b[i]);
  }

  //c
  for(i=0;i<column;i++){
    for(j=0;j<row;j++){
      c[i] += a[i][j]*b[j];
    }
    printf("%d\n",c[i]);
  }
  return 0;
}