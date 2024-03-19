//2020.1.22
//s1270188 xxxmk2
//alds1_11a

#include<stdio.h>
#define N 100

int main(){
  int data[N][N];
  int num, i, j, a, b, c;

  //input num
  scanf("%d",&num);

  //reset
  for(i=0;i<num;i++){
    for(j=0;j<num;j++) data[i][j]=0;
  }

  //input data
  for(i=0;i<num;i++){
    scanf("%d %d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d",&c);
      data[a-1][c-1]=1;
    }
  }

  //output
  for(i=0;i<num;i++){
    for(j=0;j<num-1;j++) printf("%d ",data[i][j]);
    printf("%d\n",data[i][j]);
  }

  return 0;
}

