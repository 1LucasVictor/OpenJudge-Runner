#include<stdio.h>

#define N 100

int main(){
  int Graph[N][N];
  int loop;
  int i,j;
  int vertex,adjacent,adnum;

  scanf("%d",&loop);
  for(i=1;i<loop+1;i++){
    scanf("%d %d",&vertex,&adjacent);

    for(j=1;j<adjacent+1;j++){

      scanf("%d",&adnum);

      if(adnum!=0){
	Graph[vertex][adnum]=1;
      }

      else{
	Graph[vertex][adnum]=0;
      }
    }
    
  }

  for(i=1;i<loop+1;i++){
    for(j=1;j<loop;j++){

      printf("%d ",Graph[i][j]);
    }

    printf("%d\n",Graph[i][loop]);
  }
			
  return 0;
}

