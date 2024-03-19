#include<stdio.h>
int main(){
  int p[4][13]={0};
  char m;
  int a,i,j,n,cou=0;
  scanf("%d",&n);
  while(cou<n){
  scanf(" %c %d", &m,&a);
  if(m=='S')i=0;
  else if(m=='H')i=1;
  else if(m=='C')i=2;
  else if(m=='D')i=3;
  p[i][a-1]=1;
  cou++;
  }
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(p[i][j]==0){
	if(i==0)printf("S %d\n",j+1);
	else if(i==1)printf("H %d\n",j+1);
	else if(i==2)printf("C %d\n",j+1);
	else if(i==3)printf("D %d\n",j+1);
      }
    }
  }
  return 0;
}