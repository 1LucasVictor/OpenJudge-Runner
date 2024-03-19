#include<stdio.h>

#define MAX 8

int r[MAX],c[MAX],p[2*MAX-1],n[2*MAX-1],m[MAX][MAX];

void unit(){
  int i;
  for(i=0;i<MAX;i++){r[i]=-1;c[i]=-1;}
  for(i=0;i<2*MAX-1;i++){p[i]=-1;n[i]=-1;}
}

void board(){
  int i,j;
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      if(m[i][j]){if(r[i]!=j) return;}
    }
  }for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      if(r[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void Queen(int i){
  int j;
  
  if(i==MAX){board();return;}

  for(j=0;j<MAX;j++){
    if(1==c[j]||1==p[i+j]||1==n[i-j+MAX-1]) continue;
    r[i]=j; c[j]=p[i+j]=n[i-j+MAX-1]=1;
    Queen(i+1);
    r[i]=c[j]=p[i+j]=n[i-j+MAX-1]=-1;
  }
}

int main(){
  int i,j,k;
  int row,st;
  
  unit();

  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++) m[i][j]=0;
  }

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&row,&st);
    m[row][st]=1;
  }

  Queen(0);

  return 0;
}


