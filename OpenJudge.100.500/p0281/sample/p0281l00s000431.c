#include<stdio.h>
#define N 100
#define MAX 1000000
#define W 0
#define Gr 1
#define B 2
int n,G[N][N],ws,way[N],iro[N];
int saitan();
int main(){
  int i,j,l,tar,k,v,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&tar,&k);
    way[i]=MAX;
    iro[i]=W;
    for(l=0;l<n;l++) G[i][l]=MAX;
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      G[tar][v]=c;
    }
  }
  saitan();
  return 0;
}
int saitan(){
  int i,j,tar,ws,min;
  way[0]=0;
  iro[0]=W;
  while(1){
    min = MAX;
    tar=-1;
    for(i=0;i<n;i++){
      if(min > way[i] && iro[i] != B){
	tar=i;
	min = way[i];
      }
    }
    if(tar==-1) break;
    iro[tar]=B;
    for(j=0;j<n;j++){
      if(iro[j]!=B && G[tar][j] != MAX){
	if(way[j] > way[tar] + G[tar][j]){
	  way[j]=G[tar][j] + way[tar];
	  iro[j]=Gr;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,way[i]==MAX ? -1 :way[i]);
  }  
  return ws;
}
