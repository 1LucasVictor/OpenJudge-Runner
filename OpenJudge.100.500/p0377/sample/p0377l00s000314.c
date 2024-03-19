#include<stdio.h>
int main(){
  int n,number,card[4][14];
  int i,j;
  char s;
  for(i=0;i<=13;i++){
    card[0][i]=1;
    card[1][i]=1;
    card[2][i]=1;
    card[3][i]=1;
  }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c %d",&s,&number);
         if(s=='S')card[0][number]=0;
    else if(s=='H')card[1][number]=0;
    else if(s=='C')card[2][number]=0;
    else if(s=='D')card[3][number]=0;
  }
  for(i=0;i<4;i++){
    for(j=1;j<=13;j++){
      if(card[i][j]!=0){
    if(i==0)s='S';
    else if(i==1)s='H';
    else if(i==2)s='C';
    else if(i==3)s='D';
    printf("%c %d\n",s,j);
      }
    }
  }
  return(0);
}