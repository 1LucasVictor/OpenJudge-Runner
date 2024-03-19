#include <stdio.h>

#define M 100

/*

int main(){

  int i,j,n,g[M][M],count=0,min,ti,tj;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++) scanf("%d",&g[i][j]);
}

  for(i=0;i<n;i++){

    min=2000;

    for(j=0;j<n;j++){

      if(g[i][j]!=-1){

	if(min>=g[i][j]){
	  min=g[i][j];
	  ti=i;
	  tj=j;
	}
      }
    }


    if(g[ti][tj])    count+=g[ti][tj];

    //   g[tj][ti]=-1;

  }


  printf("%d\n",count);

  return 0;

}

*/

typedef struct{
  int omomi;
  int flag;
} gyouretu;

int main(){

  int i,j,n,count=0,min,ti,tj;
  gyouretu g[M][M];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++) scanf("%d",&g[i][j].omomi);
}

  for(i=0;i<n;i++){

    min=2000;

    for(j=0;j<n;j++){

      if(g[i][j].omomi!=-1){
	if(min>=g[i][j].omomi){
	  min=g[i][j].omomi;
	  ti=i;
	  tj=j;
	}
      }
    }

    g[ti][tj].flag=1;

    if(g[tj][ti].flag!=1) count+=g[ti][tj].omomi;

  }

  printf("%d\n",count);

  return 0;

}