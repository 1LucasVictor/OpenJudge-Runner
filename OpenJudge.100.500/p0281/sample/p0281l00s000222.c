#include <stdio.h>

static const int MAX = 500;
static const int IN = (1<<21);

int main(){
  int num,i,j,ei,sum;
  int Ma[MAX][MAX];
  int x,y,kI,cI;
  int Minv;
  int D[MAX];
  int P[MAX];
  int Vis[MAX];

  scanf("%d",&num);

  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      Ma[i][j] = IN;
    }
  }

  for(i=0;i<num;i++){
    scanf("%d %d",&x,&kI);
    for(j=0;j<kI;j++){
      scanf("%d %d",&y,&cI);
      Ma[x][y]=cI;
    }
  }
  for(i=0;i<num;i++){
    D[i]=IN;
    Vis[i]=0;
  }
  
  D[0] = 0;

  while(1){
    Minv = IN;
    x=-1;
    for(i=0;i<num;i++){
      if(Minv > D[i] && !Vis[i]){
	x=i;
	Minv=D[i];
      }
    }
    if(x==-1){
      break;
    }
    Vis[x] = 1;
    for(y=0;y<num;y++){
      if(!Vis[y] && Ma[x][y] != IN){
	if(D[y] > D[x]+Ma[x][y]){
	  D[y] =D[x]+ Ma[x][y];

	}
      }
    }
  }

  for(i=0;i<num;i++){
    printf("%d %d\n",i,(D[i]==IN?-1:D[i]));
    }


  return 0;
}

