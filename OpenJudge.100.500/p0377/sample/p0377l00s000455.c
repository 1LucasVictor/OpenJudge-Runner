#include<stdio.h>
int main (void)
{
  int n,num,a[4][14]={},i,j;
  char s,r;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    s=0;
    num=0;
    scanf("%c%c%d",&r,&s,&num);
    if(s=='S'){a[0][num]=1;}
    if(s=='H'){a[1][num]=1;}
    if(s=='C'){a[2][num]=1;}
    if(s=='D'){a[3][num]=1;}
  }
  for(i=0;i<4;i++){
    for(j=1;j<14;j++){
      if(a[i][j]==0){
    if(i==0){printf("S %d\n",j);}
    if(i==1){printf("H %d\n",j);}
    if(i==2){printf("C %d\n",j);}
    if(i==3){printf("D %d\n",j);}
      }
    }
  }
  return 0;
}