#include<stdio.h>

int main(void){
  int t[4][13];
  int n,i,j,f;
  char c;
 

  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      t[i][j]=0;
    }
  }
 scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %c %d",&c,&f);
    if(c=='S'){
      t[0][f-1]=1;
    } else if(c=='H'){
      t[1][f-1]=1;
    } else if(c=='C'){
      t[2][f-1]=1;
      } else if(c=='D'){
      t[3][f-1]=1;
      }
  }
  

  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(t[i][j]==0){
	if(i==0){
	  printf("S %d\n",j+1);
	}
	else if(i==1){
	  printf("H %d\n",j+1);
	}
	else if(i==2){
	  printf("C %d\n",j+1);
	}
	else{
	  printf("D %d\n",j+1);
	}
      }
    }
  }

  return 0;
}