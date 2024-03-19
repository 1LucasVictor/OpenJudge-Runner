#include <stdio.h>
#define MAX 100
#define LIM 1000000000

int n, A[MAX][MAX];

void dkstr();

int main(){

  int p,s,m,v;
  int i,j;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      A[i][j] = LIM;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d",&p,&s);
    for(j = 0; j < s; j++){
      scanf("%d%d",&m,&v);
      A[p][m] = v;
    }
  }

  dkstr();

  return 0;
}

void dkstr(){

  int s,small;
  int min[MAX],judge[MAX];
  int i,j;

  for(i = 0; i < n; i++){
    min[i] = LIM;
    judge[i] = 0;
  }

  min[0] = 0;
  judge[0] = 1;

  for(;;){

    small = LIM;
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
      if(judge[j] != 2 && A[s][j] != LIM){
	if(min[j] > min[s] + A[s][j]){
	  min[j] = min[s] + A[s][j];
	  judge[j] = 1;
	}
      }
    }


  }

  for(i = 0; i < n; i++){
    printf("%d ",i);
    
    if(min[i] == LIM) printf("-1");
    else printf("%d",min[i]);
    printf("\n");

  }
}