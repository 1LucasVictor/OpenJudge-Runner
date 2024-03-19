#include<stdio.h>

#define u 100

int adj[u][u];

int graph(int s,int t){

  if(s==t) return 1;

  else return 0;

}


  int main(){

    int i,j,a,n,d,b[u],c[u],stu;

    scanf("%d",&n);

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){

	adj[i][j]=0;
      }
    }

    for(i=0;i<n;i++){
      scanf("%d%d",&b[i],&c[i]);
      for(j=0;j<c[i];j++){

      scanf("%d",&stu);
      adj[i][stu-1]=1;


    }
    }

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){

	printf("%d ",adj[i][j]);

    }
      printf("\n");
    }

    return 0;
  }