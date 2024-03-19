#include <stdio.h>
int main(){
  int n,card[4][13]={},rank,i,j;
  char gara,space;

  scanf("%d",&n);
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){card[i][j]=0;}
  }

  for(n;n>0;n--){
    scanf("%c",&space);
    scanf("%c %d",&gara,&rank);
    if(gara=='S')i=0;
    else if(gara=='H')i=1;
    else if(gara=='C')i=2;
    else if(gara=='D')i=3;
    j=rank-1;
    card[i][j]=1;
  }

  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(card[i][j]==0){
	if(i==0)gara='S';
	else if(i==1)gara='H';
	else if(i==2)gara='C';
	else if(i==3)gara='D';
	rank=j+1;
	printf("%c %d\n",gara,rank);
      }
    }
  }
  return 0;
}