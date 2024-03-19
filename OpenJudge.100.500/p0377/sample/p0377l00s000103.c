#include<stdio.h>
int main()
{
  int n,i,j,num;
  char card[5][14]={0},mark;
  //s=1,h=2,c=3,d=4
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf(" %c %d",&mark,&num);
    if(mark=='S')card[1][num]=1;
    if(mark=='H')card[2][num]=1;
    if(mark=='C')card[3][num]=1;
    if(mark=='D')card[4][num]=1;
  }
  for(i=1;i<=4;i++){
    for(j=1;j<=13;j++){
      if(card[i][j]==0){
	if(i==1)printf("S %d\n",j);
	if(i==2)printf("H %d\n",j);
	if(i==3)printf("C %d\n",j);
	if(i==4)printf("D %d\n",j);
      }
    }
  }
  return 0;
}
	