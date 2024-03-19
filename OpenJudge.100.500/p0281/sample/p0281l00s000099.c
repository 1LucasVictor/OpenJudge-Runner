#include<stdio.h>
#define M 1000000

int n;

int main(){
  int i,j;
  int a,b,c,d,x,y;
  int e[100],l[100],m[100];
  scanf("%d",&n);
  int G[100][101];
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=M;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d%d",&c,&d);
      G[a][c]=d;
    }
  }

  for(i=0;i<n;i++){
    e[i]=0;
    l[i]=M;
  }
  e[0]=3;
  l[0]=0;

  while(1){
    x=M;
    y=-1;
    for(i=0;i<n;i++){
      if(x>l[i] && e[i]!=1){
	x=l[i];
	y=i;
      }
    }

    if(y==-1)break;

    e[y]=1;

    for(j=0;j<n;j++){
      if(e[j]!=1 && G[y][j]!=M){
	if(l[j]>l[y]+G[y][j]){
	  e[j]=3;
	  l[j]=l[y]+G[y][j];
	}
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d ",i);
    if(l[i]==M)printf("-1\n");
    else printf("%d\n",l[i]);
  }
  return 0;
}

