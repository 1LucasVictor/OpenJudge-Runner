#include<stdio.h>

int main(void) {
  int i,j,n,rank;
  int card[4][14]={0};
  char sym,z;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%c %c %d",&z,&sym,&rank);
    switch(sym){
    case 'S':card[0][rank]=rank; break;
    case 'H':card[1][rank]=rank; break;
    case 'C':card[2][rank]=rank; break;
    case 'D':card[3][rank]=rank;
    }
  }

  for(i=0;i<4;i++)
    for(j=1;j<=13;j++){
      if(card[i][j]==0)
	switch(i){
	case 0:printf("S %d\n",j); break;
	case 1:printf("H %d\n",j); break;
	case 2:printf("C %d\n",j); break;
	case 3:printf("D %d\n",j);
	}
    }
  return(0);
}