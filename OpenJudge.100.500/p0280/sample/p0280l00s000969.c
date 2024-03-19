#include <stdio.h>
#define MAX_INT 1000000000
#define MAX 100

int n,a[MAX][MAX];

int prim(void);

int main(){
  int e;
  int i,j;
  scanf("%d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&e);
      if(e == -1) a[i][j] = MAX_INT;
      else a[i][j] = e;
    }
  }

  printf("%d\n",prim());

  return 0;
}

int prim(){
  int s,small,sum = 0;
  int pa[MAX],min[MAX],judge[MAX];
  int i,j;

  for(i = 0; i < n; i++){
    min[i] = MAX_INT;
    pa[i] = -1;
    judge[i] = 0;
  }

  min[0] = 0;

  for(;;){

    small = MAX_INT;
    s = -1;

    for(i = 0; i < n; i++){
      if(small > min[i] && judge[i] != 2){
	s = i;
	small = min[i];
      }
    }

    if( s == -1) break;

    judge[s] = 2;

    for( j = 0; j < n; j++){
      if(judge[j] != 2 && a[s][j] != MAX_INT){
	if(min[j] > a[s][j]){
	  min[j] = a[s][j];
	  pa[j] = s;
	  judge[j] = 1;
	}
      }
    }
  }
  for(i = 0; i < n; i++){
    if(pa[i] != -1) sum += a[i][pa[i]];
  }

  return sum;
}