#include<stdio.h>
main(){
  int cards[4][13]={{0},{0}};
  char str;
  int n,num,i,j;
  scanf("%d",&n);
  for(i=0;i<2*n;i++){
    scanf("%c",&str);
    scanf("%d",&num);
    if(str=='S')
      cards[0][num-1]=1;
    else if(str=='H')
      cards[1][num-1]=1;
    else if(str=='C')
      cards[2][num-1]=1;
    else if(str=='D')
      cards[3][num-1]=1;
  }
  for(j=0;j<4;j++)
    for(i=0;i<13;i++)
      if(cards[j][i]==0)
	switch(j){
	case 0:
	  printf("S %d\n",i+1);
	  break;
	case 1:
	  printf("H %d\n",i+1);
	  break;
	case 2:
	  printf("C %d\n",i+1);
	  break;
	case 3:
	  printf("D %d\n",i+1);
	  break;
	}
  return 0;
}