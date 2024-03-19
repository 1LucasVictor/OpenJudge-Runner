#include<stdio.h>
main(){
  char egara;
  int n,i,j,maisuu;
  int a[4][13]={};
  scanf("%d",&maisuu);
  for(i=0;i<maisuu;i++){
    scanf("%s%d",&egara,&n);
    if(egara=='S') a[0][n-1]=1;
    if(egara=='H') a[1][n-1]=1;
    if(egara=='C') a[2][n-1]=1;
    if(egara=='D') a[3][n-1]=1;
  }
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(a[i][j]==0){
        if(i==0) printf("S %d\n",j+1);
        if(i==1) printf("H %d\n",j+1);
        if(i==2) printf("C %d\n",j+1);
        if(i==3) printf("D %d\n",j+1);
      }
    }
  }
  return 0;
}