#include<stdio.h>

int suitnum(char);
char rsuitnum(int);

int main(){
  int n,i,j,c[4][13]={};
  int rank;
  char s;

  scanf("%d\n", &n);
  for(i=0;i<n;i++){
    scanf("%c %d\n",&s,&rank);
    c[suitnum(s)][rank-1] = 1;
  }
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if (c[i][j]==0){
        printf("%c %d\n",rsuitnum(i),j+1);
      }
    }
  }

  return 0;
}

int suitnum(char suit){
  if (suit=='S'){
    return 0;
  }
  else if (suit=='H'){
    return 1;
  }
  else if (suit=='C'){
    return 2;
  }
  else if (suit=='D'){
    return 3;
  }
  return -1;
}

char rsuitnum(int num){
  if (num==0){
    return 'S';
  }
  else if (num==1){
    return 'H';
  }
  else if (num==2){
    return 'C';
  }
  else if (num==3){
    return 'D';
  }
  return 'a';
}

