#include<stdio.h>
#define N 1000



int main(){

  int i,j,num,num_1,elem,d;
  int M[N][N];


 scanf("%d",&num);

  for(i=1;i<=num;i++){
    for(j=1;j<=num;j++){

      M[i][j]=0;
    }
  }


 
  for(i=1;i<=num;i++){

    scanf("%d %d",&num_1,&d);
    for(j=1;j<=d;j++){

      scanf("%d",&elem);
      M[i][elem]=1;
    }
  }

 for(i=1;i<=num;i++){
    for(j=1;j<=num;j++){

      printf("%d", M[i][j]);
      if(j < num)printf(" ");

    }
    puts("");
 }

  return 0;
}