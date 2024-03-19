#include <stdio.h>
int main(){
  int i,j,n[5][14],maisuu,num;
  char mark,dummy;
  scanf("%d",&maisuu);

  for(i=0; i < 5; i++){
    for(j=0; j < 14; j++){
      n[i][j]=0;
    }
  }

  for(i=0; i < maisuu; i++){
    scanf("%c",&dummy);
    scanf("%c %d",&mark,&num);

    if(mark == 'S'){
      n[0][num] = 1;
    }
    if(mark == 'H'){
      n[1][num] = 1;
    }
    if(mark == 'C'){
      n[2][num] = 1;
    }
    if(mark == 'D'){
      n[3][num] = 1;
    }
  }
  for(i = 0; i < 4; i++){
    for(j=1; j < 14; j++){
      
      if(n[i][j]==0 && i == 0) printf("S %d\n",j);
      if(n[i][j]==0 && i == 1) printf("H %d\n",j);
      if(n[i][j]==0 && i==2) printf("C %d\n",j);
      if(n[i][j]==0 && i==3) printf("D %d\n",j);
    }
  }
  
  return 0;
}